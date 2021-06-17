#include<bits/stdc++.h>
using namespace std;

int peak(int arr[], int n)
{
    int low=0;
    int high=n-1;
    int mid;
    while(low<high)
    {
        mid=(low+high)/2;
        if((mid==0 || arr[mid-1]<=arr[mid])&&(mid==(n-1) || arr[mid]>arr[mid+1]))
          return mid;
        else if(mid>0 && arr[mid-1]>=arr[mid])
        {
            high=mid-1;
        }  
        else
           low=mid+1;
    }
    return -1;
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
    cout<<arr[peak(arr,n)];
   // cout<<(lastocc(arr,n,x) - firstocc(arr,n,x))+1;
    return 0;
}