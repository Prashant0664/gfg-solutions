//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int help(int n, int x, int y, int z,int *arr){
        if(n==0){;return 0;}
        if(arr[n]!=-1){
            return arr[n];
        }
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        if(n>=x)
        a=help(n-x,x,y,z,arr);
        if(n>=y)
        b=help(n-y,x,y,z,arr);
        if(n>=z)
        c=help(n-z,x,y,z,arr);
        arr[n]=  max({a,b,c})+1;
        return arr[n];
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int *arr=new int[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=-1;
        }
        int j= help(n,x,y,z,arr);
        if(j<0){return 0;}
        return j;
        // if(n<=0){return 0;}
        // int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        // if(n>-x)
        // a=maximizeTheCuts(n-x,x,y,z);
        // if(n>=y)
        // b=maximizeTheCuts(n-y,x,y,z);
        // if(n>=z)
        // c=maximizeTheCuts(n-z,x,y,z);
        // return  max(a,max(b,c))+1;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends