#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cost[3][n];

    for(int i = 0; i < n; i++){
        cin >> cost[0][i];
    }
    for(int i = 0; i < n; i++){
        cin >> cost[1][i];
    }
    for(int i = 0; i < n; i++){
        cin >> cost[2][i];
    }
    int dp[3][n];
    dp[0][0] = cost[0][0];
    dp[1][0] = cost[1][0];
    dp[2][0] = cost[2][0];

    for(int j = 1; j < n; j++){
        dp[0][j] = dp[1][j] = dp[2][j] = INT_MAX;
        int k = 3;
        for(int i = 0; i < k; i++){
            for(int i_ = 0; i_ < k; i_++){
                if(i != i_){                                                        // THIS BLOCK OF CODE IS TO BE USED IF WE HAVE K COLORS
                    dp[i][j] = min(dp[i_][j-1], dp[i_][j]) + cost[i][j];
                }
            }
        }
        // dp[0][j] = min(dp[1][j-1], dp[2][j-1]) + cost[0][j];
        // dp[1][j] = min(dp[0][j-1], dp[2][j-1]) + cost[1][j];
        // dp[2][j] = min(dp[0][j-1], dp[1][j-1]) + cost[2][j];
    }

    cout<<min({dp[0][n-1], dp[1][n-1], dp[2][n-1]});

    return 0;
}