//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      unordered_map<int,int>m;
      int mm=INT_MAX;
      int mx=0;
      for(int i=0;i<n;i++){
          m[arr[i]]=1;
          mm=min(mm,arr[i]);
          mx=max(arr[i],mx);
      }
      int ans=0;
      int maxi=0;
      for(int i=mm;i<=mx;i++){
          if(m[i]==0){
              maxi=0;
              continue;
          }
          if(m[i]==1){
              maxi++;
          }
          ans=max(maxi,ans);
      }
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends