//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
     public:
    static bool cmp(Job a,Job b)
    {
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        
        sort(arr,arr+n,cmp);
     int maxdeadline=INT_MIN;
     for(int i=0;i<n;i++)
     {
         maxdeadline=max(maxdeadline,arr[i].dead);
     }
     
     vector<int>schedule(maxdeadline+1,-1);
     
     int count=0;
     int maxprofit=0;
     
     for(int i=0;i<n;i++)
     {
         int currprofit=arr[i].profit;
         int jobid=arr[i].id;
         int currdeadline=arr[i].dead;
         
         for(int k=currdeadline;k>0;k--)
         {
             if(schedule[k]==-1)
             {
                 count++;
                 maxprofit+=currprofit;
                 schedule[k]=jobid;
                 break;
             }
         }
     }
     vector<int>ans;
     ans.push_back(count);
     ans.push_back(maxprofit);
     return ans;
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends