#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
            cout<<mid<<endl;
            break;
        }
        else if(a[mid]<a[mid+1]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return 0;
}