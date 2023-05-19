//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges.
    int chech(int i,int j,int n,int m){
        if(i<0||j<0||i>=n||j>=m){
            return 0;
        }
        return 1;
    }
        
    int orangesRotting(vector<vector<int>>& grid) {
        queue<vector<int>>q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        q.push({-1});
        int count=0;
        while(q.size()!=0){
            if(q.front()[0]==-1){
                count++;
                
            q.pop();
            if(q.size()>0)
            q.push({-1});
            continue;
            }
            int a=q.front()[0];
            int b=q.front()[1];
            q.pop();
            if(chech(a-1,b,n,m)){
                if(grid[a-1][b]==1){
                    grid[a-1][b]=2;
                    q.push({a-1,b});
                }
            }
            if(chech(a,b-1,n,m)){
                if(grid[a][b-1]==1){
                    grid[a][b-1]=2;
                    q.push({a,b-1});
                }
            }
            if(chech(a,b+1,n,m)){
                if(grid[a][b+1]==1){
                    grid[a][b+1]=2;
                    q.push({a,b+1});
                }
            }
            if(chech(a+1,b,n,m)){
                if(grid[a+1][b]==1){
                    grid[a+1][b]=2;
                    q.push({a+1,b});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return count-1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends