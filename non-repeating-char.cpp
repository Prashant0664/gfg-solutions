//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string st){
		    int n=st.length();
		    unordered_map<char,int>m;
		    queue<char>s;
		    string ans="";
		    int c=0;
		    for(int i=0;i<n;i++){
		        m[st[i]]++;
		      s.push(st[i]);
		      //  if(m[st[i]]>0){
		            while(!s.empty()){
		                if(m[s.front()]>1){
		                    s.pop();
		                }
		                else{
		                    ans+=s.front();
		                    break;
		                }
		            }
		      if(s.size()==0){
		          ans+='#';
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
