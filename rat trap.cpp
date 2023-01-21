//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // void help(int i,int j,string s,vector<vector<int>> &v, vector<vector<int>> &m, int n, vector<string>&ans ){
    //     if(i<0||j<0||i>n-1||j>n-1||m[i][j]==0||v[i][j]==1){
    //         return;
    //     }
    //     if(i==n-1||j==n-1){
    //         ans.push_back(s);
    //         return;
    //     }
    //     m[i][j]=0;
    //     help(i-1,j,s+'U',v,m,n,ans);
    //     help(i,j-1,s+'L',v,m,n,ans);
    //     help(i+1,j,s+'D',v,m,n,ans);
    //     help(i,j+1,s+'R',v,m,n,ans);
    // }
    // vector<string> findPath(vector<vector<int>> &m, int n) {
    //     if(m[0][0]==0||m[0][0]==1){
    //         return {};
    //     }
    //     vector<string>ans;
    //     string s="";
    //     vector<vector<int>>v(n,vector<int>(n,0));
    //     help(0,0,s,v,m,n,ans);
    //     return ans;
        
    // }
    void solve(vector<vector<int>> &m,int n, int i, int j,vector<string> &v, string temp){

        if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0)

            return;

            

        if(i==n-1 && j==n-1){

            v.push_back(temp);

            return;

        }

        

        m[i][j] = 0;

        solve(m,n,i-1,j,v,temp+'U');

        solve(m,n,i+1,j,v,temp+'D');

        solve(m,n,i,j-1,v,temp+'L');

        solve(m,n,i,j+1,v,temp+'R');

        

        m[i][j] = 1;

        return;

        

    }

    vector<string> findPath(vector<vector<int>> &m, int n) {

        // Your code goes here

        vector<string> v;

        solve(m,n,0,0,v,"");

        return v;

    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends