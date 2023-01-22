//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        {
            // int i=n-1,j=0;
            // while(i>=0&&j<m){
            //     if(arr1[i]>=arr2[j]){
            //         swap(arr1[i],arr2[j]);
            //         i--,j++;
            //     }
            //     else{
            //         break;
            //     }
            // }
            // sort(arr1,arr1+n);
            // sort(arr2,arr2+m);
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            int i=0;
            int j=0;
            int g=n-1;
            while(g>=0&&j<m){
                // int k=arr1[i];
                if(arr1[g]>=arr2[j]){
                    swap(arr1[g],arr2[j]);
                    j++;
                    g--;
                }
                else{
                    
                        break;
                    }
            }
            
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends