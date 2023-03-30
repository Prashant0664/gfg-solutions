//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string s) {
        int n=s.length();
        int ans=0;
        int ansl=0,ansr=0;
        int l=0,r=0,maxi=0;
        for(int i=0;i<n;i++){
            while(l>=0&&r<n){
                // cout<<i;
                if(s[l]==s[r]){
                    l--;
                    r++;
                    maxi++;
                    if(ans<maxi){
                        ansl=l+1;
                        ansr=r-1;
                        ans=maxi;
                    }
                }
                else{
                    break;
                }
            }
            maxi=0;
            l=i+1;r=i+1;
        }
        int maxi2=0;
        int ans2=0;
        l=0;
        r=1;
        int ansl2=0;int ansr2=1;
        for(int i=0;i<n;i++){
            while(l>=0&&r<n){
                // cout<<i;
                if(s[l]==s[r]){
                    l--;
                    r++;
                    maxi2++;
                    if(ans2<maxi2){
                        ansl2=l+1;
                        ansr2=r-1;
                        ans2=maxi2;
                    }
                }
                else{
                    break;
                }
            }
            maxi2=0;
            l=i+1;r=i+2;
        }
        // cout<<ansl<<" "<<ansr<<" ";
        if(ans>ans2)
        return s.substr(ansl,ansr-ansl+1);
        else return s.substr(ansl2,ansr2+1);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends