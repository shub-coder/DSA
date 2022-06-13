#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>dp(n);
    for(int i = 0; i< n; i++){
        cin>>v[i];
    }
    dp[0] = v[0];
    dp[1] = v[1];
    dp[2] = v[2];
    for(int i=3; i<n; i++){
        dp[i] = min(dp[i-1], min(dp[i-2], dp[i-3])) + v[i];
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    for(int i=0; i<n; i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<min(dp[n-1], min(dp[n-2], dp[n-3]));
    return 0;
}
