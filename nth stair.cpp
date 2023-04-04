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
        long long int ans=0;
        long long int a=1;
        long long int b=2;
        if(n<=2){
            return n;
        }
        for(int i=2;i<n;i++){
            ans=(a%1000000007+b%1000000007)%1000000007;
            a=b%1000000007;
            b=ans%1000000007;
        }
        return (int)(ans%1000000007);
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