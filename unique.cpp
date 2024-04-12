#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;//2 3 4 2 3 4 5
    // int a[n];
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans=ans^a[i];
    // }
    // cout<<ans<<endl;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    cout<<ans<<endl;
}