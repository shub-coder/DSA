#include<bits/stdc++.h>
using namespace std;

int N = 2000;
vector<vector<int>>memo;

int editDist(int i, int j, string a, string b){
    if(i == a.size() && j == b.size()){
        return 0;
    }
    if(i == a.size()){
        return (b.size() - j);
    }
    if(j == b.size()){
        return (a.size() - i);
    }
    if(memo[i][j] != -1){
        return memo[i][j];
    }
    int ans = 0;
    if(a[i] != b[j]){
        ans = 1 + min({editDist(i + 1, j, a, b), editDist(i, j + 1, a, b), editDist(i +  1, j + 1, a, b)});
    }
    else{
        ans = editDist(i + 1, j + 1, a, b);
    }
    return memo[i][j] = ans;
}
int main(){
    string a, b;
    cin >> a >> b;
    memo.resize(a.size(), vector<int>(b.size(), -1));    
    cout << editDist(0, 0, a, b);
    return 0;
}