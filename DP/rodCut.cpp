#include<bits/stdc++.h>
using namespace std;

int solve(int n, int prices[], int memo[]){
    if(n==0)
    return 0;
    if(memo[n]!=-1)
    return memo[n];
    
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans = max(ans, prices[i]+solve(n-i, prices, memo));
    }
    return memo[n]=ans;
}
int main(){
    int n;
    cin>>n;
    int N=1e5;
    int memo[N];
    memset(memo,-1,sizeof(memo));
    int prices[n+1];
    for(int i=1; i<=n; i++){
        cin>>prices[i];
    }
    cout<<solve(n,prices,memo)<<" ";
}