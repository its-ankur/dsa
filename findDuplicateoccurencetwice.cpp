#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     ans=ans^a[i];
    // }
    // for(int i=1;i<n;i++){
    //     ans=ans^i;
    // }
    // cout<<ans<<endl;
    // return 0;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int b[max+1]={0};
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(b[i]==2){
            cout<<i<<endl;
        }
    }
    return 0;
}