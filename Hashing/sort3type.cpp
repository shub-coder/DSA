#include <bits/stdc++.h>
using namespace std;

void sort3(int arr[], int n)
{
    int l=0,mid=0,h=n-1;
    while(l<=h)
    {
        switch(arr[mid])
        {
            case 0: swap(arr[mid],arr[l]);
                    l++;
                    mid++;
                    break;
            case 2: mid++;
                    break;
            case 1: swap(arr[mid], arr[h]);
                    h--;
                    break;                
        }
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
    sort3(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}