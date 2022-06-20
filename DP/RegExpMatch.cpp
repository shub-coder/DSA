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
    int &ans = memo[i][j];

    if(ans != -1){
        return ans;
    }
    ans = 0;
    if(j + 1 < pp.size() && pp[j + 1] == '*'){
        if(i < ss.size() && (ss[i] == pp[j] || pp[j] == '.')){
            ans |= solve(i + 1, j, ss, pp, memo);
        }
        ans |= solve(i, j + 2, ss, pp, memo);
    }
    else{
        if(i < ss.size() && ss[i] == pp[j] || pp[j] == '.'){
            ans |= solve(i + 1, j + 1, ss, pp, memo);
        }
    }
    return ans;
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