//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        int arr2[n+1][sum+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(j==0){
                    arr2[i][j]=1;
                }
                else if(i==0){
                    arr2[i][j]=0;
                }
            }
        }
        for(int i=1;i<=n;i++){
            int value=arr[i-1];
            for(int j=1;j<=sum;j++){
                if(value<=j){
                    arr2[i][j]=max(arr2[i-1][-value+j],arr2[i-1][j]);
                }
                else{
                    arr2[i][j]=arr2[i-1][j];
                }
            }
        }
        return arr2[n][sum];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends