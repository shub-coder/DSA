#include <bits/stdc++.h>
using namespace std;

int main(){
vector<vector<int>> vect
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
cout << "Row's Length: " << vect.size();
cout<< "Column's Length: "<< vect[0].size();
}
int maximumWealth(vector<vector<int>>& accounts) {
        int res=0;
        int n=accounts[0].size();
        for(int i=0;i<accounts.size();i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];
            }
            res=max(res,sum);
        }
        return res;
    }