#include<bits/stdc++.h>
using namespace std;

int dp(vector<int>&arr, int i, int k, vector<int>&memo){
    if(i==arr.size())
    return 0;

    if(memo[i]!=-1)
    return memo[i];

    int mx = 0, ans = 0;
    for(int j = i; j < min((int)arr.size(), i+k); j++){
        mx = max(mx, arr[j]);
        ans = max(ans, mx * (j - i + 1) + dp(arr, j + 1, k, memo));
    }

    return memo[i] = ans;
}
int solve(vector<int>&arr, int k, vector<int>&memo){
    return dp(arr, 0, k, memo);
}
int main(){
    int k;
    cin >> k;
    vector<int>arr;
    vector<int>memo;
    int n;
    cin >> n;
    memo.resize(n, -1);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout<<solve(arr, k, memo);

    return 0;
}