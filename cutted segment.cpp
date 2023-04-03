//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int arr[n+1]={0};
        if(x<=n)arr[x]=1;
        if(y<=n)arr[y]=1;
        if(z<=n)arr[z]=1;
        for(int i=0;i<=n;i++){
             if(x-i<=0&&arr[i-x]!=0)arr[i]=max(arr[i],arr[i-x]+1);
             if(y-i<=0&&arr[i-y]!=0)arr[i]=max(arr[i],arr[i-y]+1);
             if(z-i<=0&&arr[i-z]!=0)arr[i]=max(arr[i],arr[i-z]+1);
        }
        // for(int i=0;i<=n;i++){
        //     cout<<arr[i]<<" ";
        // }
        return arr[n];
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends