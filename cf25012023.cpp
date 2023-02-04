#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int od=0;
        int ev=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ev++;
            }
            else{
                od++;
            }
        }
        
                // cout<<"_"<<od<<"-";
        if(ev==n||(od==n&&3%2==0)||(3==n&&od%2==0)){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
                
            vector<int>ans;
            if(ev>=2){
                int h=0;
                for(int i=0;i<n;i++){
                    if(h==2){
                        continue;
                    }
                    else{
                        if(arr[i]%2==0){
                            h++;
                            ans.push_back(i+1);
                        }
                    }
                }
                int c=0;
                for(int i=0;i<n;i++){
                    if(c>1){
                        continue;
                    }
                    if(arr[i]%2!=0){
                        c++;
                        ans.push_back(i+1);
                    }
                }
                for(int i=0;i<3;i++){
                    cout<<ans[i]<<" ";
                }
            }
            else{
                int c=0;
                for(int i=0;i<n;i++){
                    if(c>3){
                        break;
                    }
                    else{
                        if(arr[i]%2!=0){
                            c++;
                            ans.push_back(i+1);
                        }
                    }
                }
                for(int i=0;i<3;i++){
                    cout<<ans[i]<<" ";
                }
            }
            
        }
        cout<<endl;
    }
    return 0;
}