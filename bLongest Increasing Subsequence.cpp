//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int arr[])
    {
        int ans=1;
       int dp[n]={1};
       for(int i=1;i<n;i++){
           int dans=1;
           for(int j=0;j<i;j++){
               if(arr[i]>arr[j]){
                   dans=max(dans,dp[j]+1);
               }
           }
           dp[i]=dans;
           ans=max(dans,ans);
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends