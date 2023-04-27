//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends

class Solution{
    public:
    class Node2 {
        public:
            int  minNode;
            int maxNode;
            bool isBST;
            int maxSize;

    };

    
    Node2 solve(Node* root , int &ans) {
        // An empty tree is a BST of size 0.
        if (!root) {
            return {INT_MAX, INT_MIN , true , 0};
        }
        
        // Get values from left and right subtree of current tree.
        Node2 left = solve(root->left , ans);
        Node2 right = solve(root->right , ans);
        
        // Current node is greater than max in left AND smaller than min in right, it is a BST.
        Node2 currentNode;
        currentNode.minNode = min(root->data , left.minNode);
        currentNode.maxNode = max(root->data , right.maxNode);
        currentNode.isBST = ((root->data > left.maxNode && root->data < right.minNode)   &&   left.isBST   &&   right.isBST);
        currentNode.maxSize = left.maxSize + right.maxSize + 1;
        
        if(currentNode.isBST)   ans = max(ans,currentNode.maxSize);

        return currentNode;
    }
    
    
    int largestBst(Node *root)
    {
        int ans = 0;
        Node2  temp = solve(root , ans);
        return ans;
        
    	
    }
    // void inorder(Node*root,vector<int>&v){
    //     if(root==NULL){
    //         return;
    //     }
    //     inorder(root->left,v);
    //     v.push_back(root->data);
    //     inorder(root->right,v);
    //     return;
    // }
    // void help(Node*root,int&ans){
    //     if(root==NULL){
    //         return ;
    //     }
    //     help(root->left,ans);
    //     help(root->right,ans);
    //     vector<int>in={};
    //     inorder(root,in);
    //     int size=0;
    //     int siz=0;
    //     for(int i=0;i<in.size()-1;i++){
    //         if(in[i]<in[i+1]){
    //             siz++;
    //         }
    //         else{
    //             size=max(size,siz);
    //             siz=0;
    //         }
    //     }
    //     ans=max(size,ans);
    // }
    // int largestBst(Node *root){
    //     int ans=0;
    //     help(root,ans);
    //     return ans;
    // }
}




;





//{ Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.largestBst(root) << endl;
    }
    return 0;
}

// } Driver Code Ends