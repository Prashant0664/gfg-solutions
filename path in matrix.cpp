//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> arr)
    {
        int n=N;
        int m=N;
        if(N==1){
            return arr[0][0];
        }
        if(N==2){
            return max(arr[0][0]+max(arr[0+1][0+1],arr[0+1][0]),arr[0][1]+max(arr[0+1][0-1],arr[0+1][0]));
        }
        for(int i=n-2;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(j==0){
                    arr[i][j]=arr[i][j]+max(arr[i+1][j],arr[i+1][j+1]);
                }
                else if(j==m-1){
                    arr[i][j]=arr[i][j]+max(arr[i+1][j-1],arr[i+1][j]);
                }
                else{
                    arr[i][j]=arr[i][j]+max(arr[i+1][j],max(arr[i+1][j-1],arr[i+1][j+1]));
                }
            }
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            // cout<<arr[0][i]<<" ";
            maxi=max(maxi,arr[0][i]);
        }
        return maxi;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Endspath