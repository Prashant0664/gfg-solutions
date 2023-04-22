//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	#define ll long long
	ll countStrings(int n) {
	    long long int a=1;
	    long long int ans=0;
	    long long int b=2;
	    if(n==1){
	        return 2;
	    }
	    if(n==2){
	        return 3;
	    }
	    for(int i=2;i<=n;i++){
	        ans=(a%10000000007+b%10000000007)%10000000007;
	        a=b%10000000007;
	        b=ans%10000000007;
	    }
	    cout<<ans<<" ";
	    return ans%10000000007;
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends