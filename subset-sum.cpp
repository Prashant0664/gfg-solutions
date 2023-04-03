//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = accumulate(arr,arr+N,0);
        if(sum % 2 != 0)return false;
        
        vector<bool> prev(sum/2+1),curr(sum/2+1);
        prev[0] = curr[0] = true;
        if(arr[0] <= sum/2)prev[arr[0]] = true;
        
        for(int i=1;i<N;i++){
            for(int target=1;target<=sum/2;target++){
                bool notPick = prev[target];
                bool pick = false;
                if(target >= arr[i])pick = prev[target - arr[i]];
                
                curr[target] = pick || notPick;
            }
            prev = curr;
        }
        return prev[sum/2];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends