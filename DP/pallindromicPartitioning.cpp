#include<bits/stdc++.h>
using namespace std;

bool isPallindrome(int i, int j, string s, vector<vector<int>>memo, vector<int>memo1){
    if(i == j){
        return true;
    }

    if(i == j){
        return (s[i] == s[j - 1]);
    }

    if(memo[i][j] != -1)
    {
        return memo[i][j];
    }
    return memo[i][j] = isPallindrome(i + 1, j - 1, s, memo, memo1) && (s[i] && s[j]);
}
int solve(int i, string s, vector<vector<int>>memo, vector<int>memo1){
    if(i==s.size())
    {
        return 0;
    }
    if(memo1[i] != -1)
    {
        return memo1[i];
    }
    int ans = INT_MAX;
    for(int j = i; j < s.size(); j++){
        if(isPallindrome(i, j, s, memo, memo1)){
            ans = min(ans, solve(j + 1, s, memo, memo1));
        }
    }
    ans += 1;
    return memo1[i] = ans; 
}
int main(){
    string s;
    cin >> s;
    vector<vector<int>>memo;
    vector<int>memo1;
    memo.resize(s.size(), vector<int>(s.size(), -1));
    memo1.resize(s.size(), -1);
    int res = 0;
    res = solve(0, s, memo, memo1) - 1;
    cout << res;
    return 0;
}