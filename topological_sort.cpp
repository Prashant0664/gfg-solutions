//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void help(int V,vector<int>adj[],vector<int>&v,stack<int>&s,int i){
	    v[i]=1;
	    for(auto ih:adj[i]){
	        if(!v[ih]){
	            help(V,adj,v,s,ih);
	        }
	    }
	    s.push(i);
	}
	void  DFStopologicalSort(int node,unordered_map<int,bool>&visited,vector<int> adj[],stack<int> &s){
     
     visited[node]=true;
     
     for(auto  neighbour:adj[node]){
         if(!visited[neighbour])
          DFStopologicalSort(neighbour,visited,adj,s);
     }
     
     s.push(node);
     
 }
 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   // vector<vector<int>>adj2;
	   // for(auto n:adj){
	   //     vector<int>ss;
	   //     for(auto ii:n){
	   //         ss.push_back(ii);
	   //     }
	   //     adj2.push_back(ss);
	   //     ss={};
	   // }
	   // vector<int>v;
	   // for(int i=0;i<100005;i++){
	   //     v.push_back(0);
	   // }
	   // stack<int>s;
	   // for(int i=0;i<V;i++){
	   //     if(v[i]==0)
	   //    help(V,adj,v,s,i);
	   // }
	   // vector<int>ans;
	   // for(int i=0;i<s.size();i++){
	   //     int m=s.top();
	   //    ans.push_back(m);
	   //    s.pop();
	   // }
	   // return ans;
	   unordered_map<int,bool> visited;
    stack<int> s;
    vector<int> ans;
    // int visited[100005]={0};
    for(int i=0;i<V;i++){
        if(!visited[i])
        DFStopologicalSort(i,visited,adj,s);
        // help(V,adj,v,s,i);
    }
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    
    return ans;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends