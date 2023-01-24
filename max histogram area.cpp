//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long>s;
        vector<long long>ind(n,0);
        s.push(0);
        long long area=0;
        for(int i=0;i<n;i++){
            if(s.empty()){
                ind[i]=0;
                s.push(i);
            }
            else{
            while(!s.empty()&&arr[i]<arr[s.top()]){
                s.pop();
            }
            if(!s.empty())
            ind[i]=s.top()+1;
            else{ind[i]=0;}
            s.push(i);
            }
        }
        ind[0]=0;
        // for(int i=0;i<ind.size();i++){
        //     cout<<ind[i]<<" ";
        // }
        vector<long long>ind2(n,n-1);
        while(s.size()!=0)s.pop();
        // s.push(n-1);
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                ind2[i]=n-1;
                s.push(i);
            }
            else{
            while(!s.empty()&&arr[i]<=arr[s.top()]){
                s.pop();
            }
            if(!s.empty())
            ind2[i]=s.top()-1;
            else{ind2[i]=n-1;}
            s.push(i);}
        }
        for(int i=0;i<n;i++){
            area=max(area,arr[i]*(ind2[i]-ind[i]+1));
        }
        // cout<<endl;
        // for(int i=0;i<ind2.size();i++){
        //     cout<<ind2[i]<<" ";
        // }
        return area;
    //     long long 
}};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends