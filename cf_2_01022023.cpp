#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n]={};
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
        
            cin>>arr[i];
            m[arr[i]]++;
        }
        sort(arr,arr+n);
        if(n==2&&(arr[0]==arr[1])){
            cout<<2<<endl;
        }
        else{
        int f=0;

        for(int i=0;i<n;i++){
            if(m[arr[i]]>1){
                f++;
                m[arr[i]]=0;
            }
        }
        if(f==0){
            cout<<1<<endl;
        }
        else{
        cout<<f<<endl;}}
    }
    return 0;
}