#include<iostream>
using namespace std;
int pivot(int a[], int s, int e)
{
    if(s>e){
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (a[mid] < a[mid + 1] && a[mid] < a[mid - 1])
    {
        return mid;
    }
    if(a[mid]>a[mid+1]){
        return pivot(a,mid+1,e);
    }
    else{
        return pivot(a,s,mid-1);
    }
}

int search(int a[],int s,int e,int k){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int s = 0;
    int e = n - 1;
    int q=pivot(a, s, e);
    if(q==-1){
        cout<<search(a,s,e,k)<<endl;
    }
    else if(a[q]==k){
        cout<<q<<endl;
    }
    else if(a[0]<=k){
        cout<<search(a,0,q-1,k)<<endl;
    }
    else{
        cout<<search(a,q+1,n-1,k)<<endl;
    }
    return 0;
}