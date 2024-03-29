//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int eggDrop(int n, int k) 
    {
        // int arr[n+1][k+1];
        // for(int i=0;i<=n;i++){
        //     for(int j=0;j<=k;j++){
        //         if(n==0){
        //             arr[i][j]=0;
        //         }
        //         else{
        //             arr[i][j]=0;
        //         }
        //     }
        // }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=k;j++){
        //         arr[i][j]=1+arr[i-1][j]+arr[i-1][j-1];
        //     }
        // }
        // return arr[n][k];
        vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));
    int m = 0; // Number of moves
    while (dp[m][n] < k) {
        m++;
        for (int x = 1; x <= n; x++) {
            dp[m][x] = 1 + dp[m - 1][x - 1] + dp[m - 1][x];
        }
    }
    return m;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends