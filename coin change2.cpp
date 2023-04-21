//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int count(int coins[], int N, int sum) {

        // long long int arr[sum+1]={0};
        vector<long long>arr(sum+1,0);
        arr[0]=1;
        for(long long int i=0;i<N;i++){
            for(long long int j=1;j<=sum;j++){
                if(coins[i]-j<=0){
                    arr[j]=(arr[j]+arr[j-coins[i]]);
                }
            }
        }
        return arr[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends