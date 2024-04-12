#include<iostream>
#include <vector>
using namespace std;
bool isPoss(vector<int>arr,int n,int m,int mid){
    int student=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }
        else{
            student++;
            if(student>m || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int allocate(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPoss(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){    
        cin>>a[i];
    }
    int m;
    cin>>m;
    cout<<allocate(a,n,m)<<endl;
    return 0;
}