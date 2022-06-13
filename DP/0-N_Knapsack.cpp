#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, size;
    cin >> n >> size;
    int s[n+1], val[n+1];

    for(int i = 1; i <= n; i++){
        cin >> s[i] >> val[i];
    }

    int dp[n+1];
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= size; j++){
            if(j - s[i] >= 0){
                dp[j] = max(dp[j], dp[j - s[i]] + val[i]);
            }
        }
    }

    cout<<dp[size]<<endl;
}