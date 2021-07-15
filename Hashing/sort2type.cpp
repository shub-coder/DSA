#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n)
{
    int i=-1; int j=n;
    while(true)
    {
        do
        {
            i++;
        }while(a[i]<0);
        do
        {
            j--;
        } while (a[j]>0);
        if(i>=j)
          return;
        swap(a[i],a[j]);  
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}