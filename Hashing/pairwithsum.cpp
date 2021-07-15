#include <bits/stdc++.h>
using namespace std;

bool pairsum(int a[], int sum, int n)
{
    unordered_set<int>s;
    for(int i=0; i<n; i++)
    {
        if(s.find(sum-a[i])!=s.end())
           return true;
        s.insert(a[i]);   
    }
    return false;
}
int main()
{
    int n; 
    cin>>n;
    int sum;
    cin>>sum;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<pairsum(a,sum,n);
    return 0;
}