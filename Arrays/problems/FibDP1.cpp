#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int memo[n];
    int res;
    for(int i=0; i<=n; i++)
    {
        memo[n]=-1;
    }
    if(memo[n]==-1)
    {
        if(n==0 || n==1)
        res=n;
        else{
            res = fib(n-1)+fib(n-2);
        }
        memo[n]=res;
    }
    return memo[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}