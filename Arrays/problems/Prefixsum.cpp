#include <bits/stdc++.h>
using namespace std;

void prefixSum(int arr[], int n)
{
    int Pre_sum[n-1];
    for(int i=0; i<n-1; i++)
    {
       Pre_sum[i] = arr[i] + arr[i+1];
    }
    for(int i=0; i<n-1; i++)
    {
        cout<<Pre_sum[i]<<" ";
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
    prefixSum(arr,n);
    return 0;

}