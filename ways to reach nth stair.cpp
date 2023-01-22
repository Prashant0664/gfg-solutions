//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        if(n<=2){
            return n;
        }
        long long ans=0;
        long long a=1;
        long long b=2;
        for(int i=2;i<n;i++){
            ans=(a%1000000007+b%1000000007)%1000000007;
            a=b;
            b=ans;
        }
        return b%1000000007;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends