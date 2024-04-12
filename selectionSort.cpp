#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){    
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}