//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int arr[s.length()+1][t.length()+1];
        for(int i=0;i<=s.length();i++){
            arr[i][0]=i;
        }
        for(int i=0;i<=t.length();i++){
            arr[0][i]=i;
        }
        for(int i=1;i<=s.length();i++){
            for(int j=1;j<=t.length();j++){
                if(s[i-1]!=t[j-1]){
                    arr[i][j]=1+min(arr[i-1][j],min(arr[i-1][j-1],arr[i][j-1]));
                }
                else{
                    arr[i][j]=arr[i-1][j-1];
                }
            }
        }
        // for(int i=0;i<=s.length();i++){
        //     for(int j=0;j<=t.length();j++){
        //         cout<<arr[i][j]<<" ";
        //     }cout<<endl;}
        return arr[s.length()][t.length()];
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