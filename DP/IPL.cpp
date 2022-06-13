#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    vector<int>v(n);
    vector<int>dp(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum +=v[i];
    }
    dp[0] = v[0];
    dp[1] = v[1];
    dp[2] = v[2];
    for(int i=3; i<n; i++){
        dp[i] = min({dp[i-1], dp[i-2], dp[i-3]}) + v[i];
    }
    cout<<sum - min({dp[n-1], dp[n-2], dp[n-3]});
}