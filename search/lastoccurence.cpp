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
        if(x<arr[mid])
        {
            right=mid-1;
        }
        else if(mid==(n-1)||(arr[mid] != arr[mid+1]))
           break;
        else
           left=left+1;   
    }
    return mid;
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
    return 0;
}