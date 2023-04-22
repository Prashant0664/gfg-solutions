//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    int help(vector<vector<int>>& grid,int i,int j,int n,int m){
        if(i<0||j<0||i>=n||j>=m){
            cout<<"-";
            return 0;
        }
        if(grid[i][j]==2){
            return 1;
        }
        if(grid[i][j]==0){
            return 0;
        }
        if(grid[i][j]==1){
            return 0;
        }
        int mmm=help(grid,i,j-1,n,m);
        // try{
            
        int mm=help(grid,i,j+1,n,m);
        // }
        // catch(e){
        //     cout<<e;
        // }
        // int mmmm=help(grid,i+1,j,n,m);
        // int mmmmm=help(grid,i-1,j,n,m);
        // return max(mm,max(mmm,max(mmmm,mmmmm)));
    }
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        // int n=/grid.size();
        // int m=grid[0].size();
        // int i1=-1,j1=-1;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(grid[i][j]==1){
        //             i1=i;j1=j;
        //         }
        //     }
        // }
        // cout<<i1<<" "<<j1<<endl;
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         ans=max(ans,help(grid,i1,j1,m,n));
        //     }
        // }
           vector<vector<int>> dir = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        queue<pair<int,int>> q;
        for(int i = 0; i < grid.size(); i++)
            for(int j = 0; j < grid[0].size(); j++) 
                if(grid[i][j] == 1) {
                    q.push({i,j});
                    break;
                }
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> v(m, vector<int>(n,0));
        while(q.size()) {
            auto p = q.front(); q.pop();
            for(auto d: dir) {
                int x=d[0]+p.first, y= d[1]+p.second;
                if(x >=m || x < 0|| y >= n || y < 0 || grid[x][y]==0 || v[x][y]) 
                    continue;
                if(grid[x][y] == 2) return 1;
                q.push({x, y});
                v[x][y] = 1;
            }
        }
        return 0;
        // return help(grid,i1,j1,n,m);
        // int n1=0,n2=0,n3=0,n4=0;
        // n1=help(grid,i1+1,j1,n,m);
        // n2=help(grid,i1,j1+1,n,m);
        // n3=help(grid,i1-1,j1,n,m);
        // n4=help(grid,i1,j1-1,n,m);
        // return max(n1,max(n2,max(n3,n4)));
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends