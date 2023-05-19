#include<bits/stdc++.h>
using namespace std;
void help2(int arr2[]){
    cout<<arr2[0]<<" ";
}
void help(int arr[]){
    arr[0]=22;
    help2(arr);
}
int main(){
    cout<<"(())";
    int _;
    cin>>_;
    while(_--){
        int arr[]={1,2,3};
        help(arr);
    }
    return 0;
}