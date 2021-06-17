#include <bits/stdc++.h>
using namespace std;

int binary(int arr[], int n, int x)
{
    int left = 0; 
    int right = n-1;
    int mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(arr[mid]==x)
           return mid;
        else if(x<arr[mid])
        {
            right=mid-1;
        }   
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
    cout<<binary(arr,n,x);
    return 0;
}