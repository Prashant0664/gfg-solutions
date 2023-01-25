//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    if(A.length()==0){
		        return "";
		    }
		    unordered_map<char,int>m;
		    string ans="";
		    ans+=A[0];
		    queue<char>q;
		    q.push(A[0]);
		    for(int i=0;i<A.length();i++){
		        m[A[i]]++;
		        if(i==0){
		            continue;
		        }
		        q.push(A[i]);
		        if(m[q.front()]==1){
		            ans+=q.front();
		        }
		        else{
		            while(!q.empty()&&m[q.front()]!=1)
		            {
		                q.pop();
		            }
		            if(q.size()>0)
		            ans+=q.front();
		            else{
		                ans+='#';
		            }
		        }
		            
		        
		    }
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends