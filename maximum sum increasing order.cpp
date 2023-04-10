//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	   // long long int res[n];
	   // long long int curr=0;
	   // for(int i=0;i<n;i++){
	   //     long long int cut=arr[i];
	   //     int j=i-1;
	   //     while(j>=0){
	   //         if(arr[j]<arr[i]){
	   //             curr=max((int)(curr%1000000007),arr[j]);
	   //         }
	   //         j--;
	   //     }
	   //     res[i]=(arr[i]+(int)curr%1000000007)%1000000007;
	   // }
	   // curr=0;
	   // for(int i=0;i<n;i++){
	   //     curr=max(int(curr%1000000007),arr[i]);
	   // }
	   //// return 88;
	   // return (int)(curr%1000000007);
	   int T[n] = {0} ;
	    T[n-1] = arr[n-1];
	    for( int i = n - 2 ; i >= 0 ; i-- )
	        {
	            T[i] = arr[i];
	            for( int j = i+1 ; j < n ; j++ )
	                if(arr[j] > arr[i])
	                    T[i] = max( T[i] , arr[i] + T[j] );
	        }
	       // for(int i=0;i<n;i++){
	           // cout<<T[i]<<" ";
	       // }
	   return *max_element( T , T+n );
	}  
};




//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends