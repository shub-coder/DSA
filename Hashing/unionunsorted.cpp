#include <bits/stdc++.h>
using namespace std;

int unionunsort(int a[], int b[], int m, int n)
{
   unordered_set<int>s;
   for(int i=0; i<m; i++)
   {
       s.insert(a[i]);
   }
   for(int i=0; i<n; i++)
   {
       s.insert(b[i]);
   }
   return s.size();
}
int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;
    int a[m];
    int b[n];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    cout<<unionunsort(a,b,m,n);
    return 0;
}