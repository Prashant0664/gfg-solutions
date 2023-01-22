//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
  void dfs(vector<vector<char>>& grid,int i, int j,int rs, int cs,vector<vector<int>>&vis){
        if(i<0 || j<0 || i>rs-1 || j>cs-1 || vis[i][j]==1 || grid[i][j]=='0'){
            return;
        }
        vis[i][j]=1;
        dfs(grid,i,j+1,rs,cs,vis);
        dfs(grid,i+1,j+1,rs,cs,vis);
        dfs(grid,i-1,j+1,rs,cs,vis);
        dfs(grid,i+1,j,rs,cs,vis);
        dfs(grid,i-1,j,rs,cs,vis);
        dfs(grid,i-1,j-1,rs,cs,vis);
        dfs(grid,i,j-1,rs,cs,vis);
        dfs(grid,i+1,j-1,rs,cs,vis);

    }

    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int rsize=grid.size();
        int csize=grid[0].size();
        int count=0;
        vector<vector<int>>vis(rsize,vector<int>(csize,0));
        for(int i=0;i<rsize;i++){
            for(int j=0;j<csize;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j,rsize,csize,vis);
                }
            }
        }
        return count;
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