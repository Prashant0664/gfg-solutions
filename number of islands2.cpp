//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void help(vector<vector<char>>& grid,int m,int n,int i,int j){
        
        grid[i][j]='0';
        if(i-1>=0 && grid[i-1][j]=='1'){
            help(grid,m,n,i-1,j);
        }
        
        if(j-1>=0 && grid[i][j-1]=='1'){
            help(grid,m,n,i,j-1);
        }
        
        if(i+1<n){
            if(grid[i+1][j]=='1')
            help(grid,m,n,i+1,j);
        }
        
        if(j+1<m && grid[i][j+1]=='1'){
            help(grid,m,n,i,j+1);
        }
        
        if(i-1>=0 && j-1>=0 && grid[i-1][j-1]=='1'){
            help(grid,m,n,i-1,j-1);
        }
        
        if(i+1<n && j+1<m && grid[i+1][j+1]=='1'){
            help(grid,m,n,i+1,j+1);
        }
        
        if(i-1>=0 && j+1<m && grid[i-1][j+1]=='1'){
            help(grid,m,n,i-1,j+1);
        }
        
        if(i+1<n && j-1>=0 && grid[i+1][j-1]=='1'){
            help(grid,m,n,i+1,j-1);
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(grid[i][j]=='1'){
                    // cout<<99;
                    ans++;
                    int j2=j;
                    int i2=i;
                    help(grid,m,n,i2,j2);
                }
            }
        }
        return ans;
    }
    
    
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends