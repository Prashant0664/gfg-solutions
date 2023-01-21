#include<bits/stdc++.h>
using namespace std;
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n]={};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==0&&arr[i+1]%2==0){
                ans++;
            }
            else if(arr[i]%2==1&&arr[i+1]%2==1){
                ans++;
            }
            else{
                ;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}