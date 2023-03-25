//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        int e=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(c==0){
                e=arr[i];
                c=1;
            }
            else{
                if(arr[i]==e){
                    c++;
                }
                else{
                    c--;
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==e){
                count++;
            }
        }
        return (count>n/2)?e:-1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends