#include<bits/stdc++.h>
using namespace std;

int coinChange(int coins[], int n, int sum)
{
    if(sum==0)
    return 1;
    if(n==0)
    return 0;
    int res = coinChange(coins, n-1, sum);
    if(coins[n-1]<=sum)
    {
        res = res+coinChange(coins, n, sum-coins[n-1]);
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int coins[n];
    for(int i=0; i<n; i++)
    {
        cin>>coins[i];
    }
    int sum;
    cin>>sum;
    cout<<coinChange(coins, n, sum);
}