#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0; i<d; i++)
    {
        temp[i]=arr[i];
    }
    int c=0;
    for(int i=d; i<n; i++)
    {
        arr[c] = arr[i];
        c++;
    }
    for(int i=0; i<d; i++)
    {
        arr[c]=temp[i];
        c++;
    
    }
   
}
int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}