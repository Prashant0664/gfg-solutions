//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    int knapSack(int W, int wt[], int val[], int n)
    {
        int i, w;
        vector<vector<int>> K(n + 1, vector<int>(W + 1));
        for (i = 0; i <= n; i++)
        {
            for (w = 0; w <= W; w++)
            {
                if (i == 0 || w == 0)
                    K[i][w] = 0;
                else if (wt[i - 1] <= w)
                    K[i][w] = max(val[i - 1] +
                                      K[i - 1][w - wt[i - 1]],
                                  K[i - 1][w]);
                else
                    K[i][w] = K[i - 1][w];
            }
        }
        return K[n][W];
    }

    // {
    //     int** dp;
    //     dp = new int*[n];

    //     // loop to create the table dynamically
    //     for (int i = 0; i < n; i++)
    //         dp[i] = new int[w + 1];

    //     // loop to initially filled the
    //     // table with -1
    //     for (int i = 0; i < n; i++)
    //         for (int j = 0; j < w + 1; j++)
    //             dp[i][j] = -1;
    //     // int *m=new int[w+1];
    //     // int **arr=new int*[n];
    //     // for(int i=0;i<n;i++){
    //         // arr[i]=m;
    //         // for(int j=0;j<n+1;j++){
    //             // arr[i][j]=-1;
    //         // }
    //     // }
    //     // return 1;
    //     return knapSackRec(w,wt,val,n-1,dp);
    //     // return 1;
    //     // if(w==0){return 0;}
    //     // if(n==0){return 0;}

    //     // // int r=knapSnap(w,wt,val,n-1);
    //     // int r=0;
    //     // if(w<wt[n-1]){
    //     //     r= knapSack(w,wt,val,n-1);
    //     //     return r;
    //     // }
    //     // else{
    //     //     return max(val[n-1]+knapSack(w-wt[n-1],wt,val,n-1),knapSack(w,wt,val,n-1));
    //     // }
    // }
};

//{ Driver Code Starts.

int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // reading number of elements and weight
        int n, w;
        cin >> n >> w;

        int val[n];
        int wt[n];

        // inserting the values
        for (int i = 0; i < n; i++)
            cin >> val[i];

        // inserting the weights
        for (int i = 0; i < n; i++)
            cin >> wt[i];
        Solution ob;
        // calling method knapSack()
        cout << ob.knapSack(w, wt, val, n) << endl;
    }
    return 0;
}
// } Driver Code Ends