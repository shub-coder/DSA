#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<int>&arr, int mid, int m){
    int total = 0;
    int count = 1;
    for(int i = 0; i < arr.size(); i++){
        total += arr[i];
        if(total > mid){
            count++;
            total = arr[i];
            if(count > m){
                return true;
            }
        }
        else{
            continue;
        }
    }
    return false;
}
int solve(vector<int>&arr, int m){
    int start = *max_element(arr.begin(), arr.end());
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    int end = sum;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(isValid(arr, mid, m)){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}
int main(){
    int n, m;
    cin >> n >> m;
    cout<<n<<" "<<m<<" ";
    vector<int>arr;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout<<solve(arr, m);
    return 0;
}