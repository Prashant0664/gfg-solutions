//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{int mod = 1e9 + 7;
	    vector<vector<int>>dp(n , vector<int>(sum+1, 0));
        for(int i = 0; i < n; i++) dp[i][0] = 1;
        
        if(arr[0] <= sum) dp[0][arr[0]] = 1;
        
        if(arr[0] == 0) dp[0][arr[0]] = 2;
        for(int i = 1; i < n; i++){
            for(int tar = 0; tar <= sum; tar++){
                int notTake = dp[i-1][tar];
                
                int Take = 0;
                if(arr[i] <= tar){
                    Take = dp[i-1][tar - arr[i]];
                }
                
                dp[i][tar] = (Take%mod + notTake%mod)%mod;
            }
        }
        
        return dp[n-1][sum];
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends