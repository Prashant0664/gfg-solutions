//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        int ind=0;
        if(N==1) return 1;
        while(ind<N){
            int maxi=0;
            int store_idx=ind;
            for(int i=1;i<=A[ind];i++){
                if(maxi<=A[ind+i]){
                    maxi=A[ind+i];
                    store_idx=ind+i;
                }
                if(A[ind+i] + ind+i >=N-1){
                    return 1;
                }
            }
            ind=store_idx;
            if(maxi==0){
                return 0;
            }
        }    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends