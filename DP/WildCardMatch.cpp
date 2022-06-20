#include<bits/stdc++.h>
using namespace std;

bool solve(int i, int j, string ss, string pp, vector<vector<int>>&memo){
    if(i == ss.size() && j == pp.size())
    {
        return true;
    }
    if(j == pp.size())
    {
        return false;
    }
    if(memo[i][j] != -1){
        return memo[i][j];
    }
    bool ans = false;
    if(i < ss.size() && ss[i] == pp[j]){
        ans |= solve(i + 1, j + 1, ss, pp, memo);
    }
    else if(pp[j] == '?'){
        if(i == ss.size()){
            return false;
        }
        else{
            ans |= solve(i + 1, j + 1, ss, pp, memo);
        }
    }
    else if(pp[j] == '*'){
        if(i < ss.size()){
            ans |= solve(i + 1, j, ss, pp, memo);
        }
        ans |= solve(i, j + 1, ss, pp, memo);
    }
    return memo[i][j] = ans;
}

bool isMatch(string ss, string pp){
    vector<vector<int>>memo;
    memo.resize(ss.size() + 1, vector<int>(pp.size() + 1, -1));
    return solve(0, 0, ss, pp, memo);
}

int main(){
    string ss, pp;
    cin >> ss >> pp;
    cout<<isMatch(ss, pp);
}