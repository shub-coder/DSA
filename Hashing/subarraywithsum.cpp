#include <bits/stdc++.h>
using namespace std;

bool givensum(int a[], int sum, int n)
{
    unordered_set<int>s;
    
    int pre_sum=0;
    for(int i=0; i<n; i++)
    {
        pre_sum = pre_sum + a[i];
        if(pre_sum==sum)
           return true;
        if(s.find(pre_sum-sum)!=s.end())
           return true;
        s.insert(pre_sum);      
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
    cout<<givensum(a,sum,n);
    return 0;
}