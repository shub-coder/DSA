#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum;
    cin>>sum;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bool dp[n+1][sum+1];
    dp[0][0] = true;
    for(int j = 1; j <= sum; j++){
        dp[0][j] = false;
    }

    for(int i = 1; i <= n; i++){

        for(int j = 0; j <= sum; j++){

            dp[i][j] = dp[i - 1][j];

            if(j - arr[i] >= 0){

                dp[i][j] = dp[i][j] || dp[i - 1][j - arr[i]];
            }
        }
    }

    for(int i = 0; i <= n; i++){
        
        for(int j = 0; j <= sum; j++){

            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<dp[n][sum];
}