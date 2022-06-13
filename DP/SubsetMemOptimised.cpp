#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum;
    cin >> n >> sum;

    vector<int>arr(n+1);

    arr[0] = 0;

    bool dp[2][sum + 1];

    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    dp[0][0] = true;

    for(int j = 1; j <= sum; j++){
        dp[0][j] = false;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j<= sum; j++){
            dp[1][j] = dp[0][j];

            if(j - arr[i] >= 0){
                dp[1][j] = dp[1][j] || dp[0][j - arr[i]];
            }
        }
        for(int j = 0; j <= sum; j++){
            dp[0][j] = dp[1][j];
        }
    }

    cout<<dp[1][sum]<<endl;
}
