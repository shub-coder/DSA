#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int dp[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        dp[i] = 1;
    }
    for(int i = 0; i < n; i++){

        // dp[i] -> lis if it ends on ith index
        for(int j = 0; j < i; j++){

            if(arr[j] <= arr[i]){
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    int lis = 1;
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" "<< dp[i] << " "<< endl;
        lis = max(lis, dp[i]);
    }
    cout << lis;
}