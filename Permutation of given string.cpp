//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void permute(string s,string answer,vector<string>&v){
	    if(s.length() == 0)
    {
        for(int i=0;i<v.size();i++){
            if(v[i]==answer)return;
        }
        v.push_back(answer);
        return;
    }
    for(int i=0 ; i<s.length() ; i++)
    {
        char ch = s[i];
        string left_substr = s.substr(0,i);
        string right_substr = s.substr(i+1);
        string rest = left_substr + right_substr;
        permute(rest , answer+ch,v);
    }
	}
		vector<string>find_permutation(string s)
		{
		    if(s.length()==0){
		        return {};
		    }
		    vector<string>v;
		    permute(s,"",v);
		    sort(v.begin(),v.end());
		    return v;
		    
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends