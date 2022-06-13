#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int>arr(n+1);
    arr[0] = 0;
    
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }

    bool dp[sum+1]; // SPACE COMPLEXITY -> O(SUM)
    dp[0] = true;

    for(int j = 1; j <= sum; j++){
        dp[j] = false;
    }

    for(int i = 1; i <= n; i++){
        for(int j = sum; j >=0; j--){
            if(j - arr[i] >= 0){
                dp[j] = dp[j] || dp[j - arr[i]]; // TIME COMPLEXITY -> O(n*sum)
            }
        }
    }
    cout<<dp[sum];
}