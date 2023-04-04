//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    int arr[V+1];
	    arr[0]=0;
	    for(int i=1;i<=V;i++){
	        arr[i]=INT_MAX;
	    }
	    for(int i=1;i<=V;i++){
	        for(int j=0;j<M;j++){
	            if(coins[j]<=i){
	            int s=arr[i-coins[j]];
	            if(s!=INT_MAX && s+1<arr[i]){
	                arr[i]=s+1;
	            }}
	        }
	    }
	    if(arr[V]==INT_MAX){
	        return -1;
	    }
	    return arr[V];
	    
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Endsminim