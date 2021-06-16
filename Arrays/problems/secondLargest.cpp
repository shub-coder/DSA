#include <bits/stdc++.h>
using namespace std;

int SLarge(int arr[], int n)
{
    int res_element=-1, largest = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i]>arr[largest])
        {
            res_element = largest;
            largest  = i;
        }
        else if(arr[i]!=arr[largest])
        {
            if((res_element=-1)||(arr[i]>arr[res_element]))
            {
                res_element = i;
            }
        }
    }
    return res_element;
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
    int b = SLarge(arr, n);
    cout<<"second Largest element is:"<<" "<<arr[b];
}