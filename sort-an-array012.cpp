//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        int a=0,b=0,c=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                b++;
            }if(arr[i]==2){
                c++;
            }if(arr[i]==0){
                a++;
            }
        }
        int i=0;
        for(i=0;i<a;i++){
            arr[i]=0;
        }
        for(i;i<a+b;i++){
            arr[i]=1;
        }
        for(i;i<a+b+c;i++){
            arr[i]=2;
        }
        return;
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends