//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> v;
        int max = -1;
        int x = 0;
        for(int i=0;i<=n-k;i++){
            if(max==-1 || max == x){
                max = arr[i];
                int j=i+1;
                for(int a=0;a<k-1;a++,j++) if(arr[j]>max) max = arr[j];
            }
            else{
                if(arr[i+k-1]>max) max = arr[i+k-1];
            }
            v.push_back(max);
            x = arr[i];
        }
        return v;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends