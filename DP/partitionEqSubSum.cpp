#include<bits/stdc++.h>
using namespace std;

bool solve(vector<int>&arr, int n, int sum){
    bool dp[sum + 1];
    dp[0] = true;

    for(int i = 1; i <= sum; i++){
        dp[i] = false;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= sum; j++){

            if(j - arr[i] >= 0){
                dp[j] = dp[j] || dp[j - arr[i]];
            }
        }
    }
    return dp[sum];
}
int main(){
    int n, sum = 0;
    cin >> n;

    vector<int>arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<<sum;
    if(sum % 2 != 0)
    cout<<"NOT POSSIBLE TO PARTITION THE ARRAY !!"<< endl;

    int ans = solve(arr, n, sum/2);

    if(ans == 1){
        cout<<"PARTITION OF ARRAY IS POSSIBLE"<<endl;
    }
    else{
        cout<<"PARTITION OF ARRAY IS NOT POSSIBLE"<<endl;
    }
    return 0;
}