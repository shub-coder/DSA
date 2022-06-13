#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>memo;

int subSetSum(int index, int sum, vector<int>&arr){
    if(index == -1)
    return  (sum == 0);

    if(memo[index][sum]!=-1)
    return memo[index][sum];

    bool ans = false;

    if(sum>=arr[index]){
        ans |= subSetSum(index - 1, sum - arr[index], arr);
    }

    ans |= subSetSum(index - 1, sum, arr);

    return memo[index][sum] = ans;
}
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    int sum;
    cin >> sum;

    memo.resize(n+1, vector<int>(sum + 1, -1));
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // for(int i = 0; i < n; i++){
    //     cout<<arr[i];
    // }
    cout<<subSetSum(n-1, sum, arr)<<" ";
    //return 0;
}