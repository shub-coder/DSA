#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
          return mid;
        if(arr[low]<arr[mid])
        {
            if(x>=arr[low] && x<arr[mid])
            {
                high=mid-1;
            }
            else
              low=mid+1;
        }
        else
        {
            if(arr[mid]<x && x<=arr[high])
               low=mid+1;
            else
               high=mid-1;   
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<search(arr,n,x);
   // cout<<(lastocc(arr,n,x) - firstocc(arr,n,x))+1;
    return 0;
}