#include <bits/stdc++.h>
using namespace std;

int lastocc(int arr[], int n,int x)
{
    int left=0;
    int right=n-1;
    int mid;
    while(left<right)
    {
        mid=(left+right)/2;
        if(arr[mid]==0)
        {
            left=mid+1;
        }
        else{
         if(mid==0||(arr[mid-1] == 0))
           return (n-mid);
         else
           right=mid-1; 
        }  
    }
    return 0;
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
    cout<<lastocc(arr,n,x);
   // cout<<(lastocc(arr,n,x) - firstocc(arr,n,x))+1;
    return 0;
}