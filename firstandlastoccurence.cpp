#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int i=0;
    int j=n-1;
    int first=-1;
    int last=-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k){
            if(mid==0 || a[mid-1]<k){
                first=mid;
                break;
            }
            else{
                j=mid-1;
            }
        }
        else if(a[mid]>k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    while(i<=j){
        int mid=i+(j-i)/2;
        if(a[mid]==k){
            if(mid=n-1 || a[mid+1]>k){
                last=mid;
                break;
            }
            else{
                i=mid+1;
            }
        }
        else if(a[mid]>k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    cout<<first<<" "<<last<<endl;
    return 0;
}