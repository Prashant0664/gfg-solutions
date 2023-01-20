//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {   Node*tryi=head;
        int siz=0;
        while(tryi!=NULL){
            siz++;
            tryi=tryi->next;
        }
        
        if(siz-k==0){
            return head;
        }
        k=(k%siz);
        Node * temp=head;
        for(int i=0;i<k-1;i++){
            head=head->next;
        }
        Node *t2=head->next;
        Node*ans=t2;
        head->next=NULL;
        while(t2->next!=NULL){
            t2=t2->next;
        }
        t2->next=temp;
        return ans;
        
        // Your code here
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends