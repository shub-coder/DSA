#include<bits/stdc++.h>
using namespace std;

int solve(int i,string s, vector<int>dp){
    if(i==s.size())
    return 1;
    if(dp[i]!=-1)
    return dp[i];
    int ans = 0;
    if(s[i]>='1' && s[i]<='9'){
        ans += dp[i+1];
    }
    if(i+1<s.size() && s[i]=='1'){
        ans += dp[i+2];
    }
    if(i+1<s.size() && s[i]=='2' && s[i+1]<=6){
        ans += dp[i+2];
    }
    return dp[i] = ans;
}
int main(){
    string s; 
    vector<int>dp;
    while(1){
        cin>>s;
        if(s[0]=='0')
        {
            break;
        }
        dp.clear();
        dp.resize(s.size(), -1);
        cout<<solve(0,s,dp)<<endl;
    }
}