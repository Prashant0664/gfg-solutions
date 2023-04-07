//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        int n=s.length();
        int m=t.length();
        int arr[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0){
                    arr[i][j]=j;
                }
                else if(j==0){
                    arr[i][j]=i;
                }
                
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]!=t[j-1]){
                    arr[i][j]=1+min(arr[i-1][j],min(arr[i][j-1],arr[i-1][j-1]));
                }
                else{
                    arr[i][j]=arr[i-1][j-1];
                }
            }
        }
        return arr[n][m];
        // for(int i)
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends