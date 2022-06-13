#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int dp[n][3];
    for(int i = 0; i < n; i++){
        dp[i][0] = dp[i][1] = dp[i][2] = 1e9;
    }
    dp[0][0] = 0;
    dp[0][1] = b[0];
    dp[0][2] = 2 * b[0];

    for(int i = 1; i < n; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(a[i-1] + j != a[i] + k){
                    dp[i][k] = min(dp[i][k], dp[i-1][j] + k * b[i]);
                }
            }
        }
    }

    cout<<min({dp[n-1][0], dp[n-1][1], dp[n-1][2]})<<endl;

    return 0;
}