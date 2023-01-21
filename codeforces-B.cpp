#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k=1;
        long long ans=n*(n-1);
        while(k<=n){
            ans=((ans%(1000000007))*k)%(1000000007);
            k++;
        } 
        // wasted();
        cout<<ans<<endl;
    }
    return 0;
}