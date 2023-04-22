//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    int arr[]={-2,-1,+2,+1,-2,-1,+2,+1};
	    int arr2[]={-1,-2,+1,+2,+1,+2,-1,-2};
	    int xi=KnightPos[0];
	    int yi=KnightPos[1];
	    int xf=TargetPos[0];
	    int yf=TargetPos[1];
	    queue<pair<pair<int,int>,int>>q;
	    q.push({{xi,yi},0});
	    int v[N+1][N+1]={0};
	    while(!q.empty()){
	        int r=q.front().first.first;
	        int c=q.front().first.second;
	        int s=q.front().second;
	        q.pop();
	        if(r==xf&&c==yf){
	            return s;
	        }
	        for(int i=0;i<8;i++){
	            int nr=arr[i]+r;
	            
	            int nc=arr2[i]+c;
	            if(nr<=0||nc<=0||nr>N||nc>N){
	                
	            }else{
	                if(v[nr][nc]==0){
	                    q.push({{nr,nc},s+1});
	                    v[nr][nc]=1;
	                }
	            }
	            
	            
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends