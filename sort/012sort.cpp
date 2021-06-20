#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void sorting(int arr[], int n)
{
    int left=0, middle=0, right=n-1;
    while (middle<=right)
    {
        switch(arr[middle])
        {
            case 0: swap(arr[left], arr[middle]);
                    left++;
                    middle++;
                    break;
            case 1: middle++;
                    break;
            case 2: swap(arr[middle], arr[right]);
                    right--;
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
    sorting(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}