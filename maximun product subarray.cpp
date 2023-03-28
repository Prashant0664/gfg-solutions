//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long ans=0;
	    long long count=1;
	    for(int i=0;i<n;i++){
	     if(arr[i]==0){
	         count=1;
	     }
	     else{
	         count*=arr[i];
	         if(ans<count){
	             ans=count;
	         }
	     }
	    }
	    for(int i=n-1;i>=0;i--){
	     if(arr[i]==0){
	         count=1;
	     }
	     else{
	         count*=arr[i];
	         if(ans<count){
	             ans=count;
	         }
	     }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends