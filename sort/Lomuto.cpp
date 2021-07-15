#include <bits/stdc++.h>
using namespace std;

int lom(int arr[],  int l, int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l; j<=h-1; j++)
    {
        if(arr[j]<pivot);
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[h]);
    
    return (i+1);
}
void qsort(int arr[], int l, int h)
{
    if(l<h)
    {
        int p=lom(arr, l, h);
        qsort(arr, l, p-1);
        qsort(arr, p+1,h);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;
    qsort(arr, l, h);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}