#include <iostream>
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

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s = 0;
    int e = n - 1;
    int q=pivot(a, s, e);
    cout<<q<<endl;
    return 0;
}