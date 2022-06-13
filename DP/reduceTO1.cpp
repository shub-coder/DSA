#include<bits/stdc++.h>
using namespace std;

int solve(int n, int memo[]){
    if(n==1)
    return 0;
    int &ans = memo[n];
    if(ans!=-1)
    return ans;
    ans = INT_MAX;
    if(n%2==0){
        ans = min(ans, solve(n/2, memo));
    }
    if(n%3==0){
        ans = min(ans, solve(n/3, memo));
    }
    ans = min(ans, solve(n-1, memo));
    ans +=1;
    return ans;
}
int main(){
    int n;
    cin>>n;
    int N = 1e5;
    int memo[N];
    memset(memo, -1, sizeof(memo));
    cout<<solve(n,memo);
}