#include<iostream>
using namespace std;
long long int binary(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq>n){
            e=mid-1;
        }
        else{
            s=mid+1;
            ans=mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePre(int n,int p,int temp){
    double factor=1;
    double ans=temp;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int temp=binary(n);
    cout<<morePre(n,3,temp)<<endl;
    return 0;
}