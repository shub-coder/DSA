#include <bits/stdc++.h>
using namespace std;

int intersection(int a[], int b[], int m, int n)
{
    unordered_set<int>s;
    for(int i=0; i<n; i++)
    {
        s.insert(a[i]);
    }
    int r=0;
    for(int j=0; j<m; j++)
    {
        if(s.find(b[j])!=s.end())
        {
            r++;
            s.erase(b[j]);
        }
    }
    return r;
}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    cout<<intersection(a,b,m,n);
    return 0;
}