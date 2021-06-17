#include<bits/stdc++.h>
using namespace std;

int sumofK(int arr[], int k, int n){
    int curr_sum = 0;
    for(int i=0; i<k; i++){
        curr_sum +=arr[i];
    }
    int max_sum = curr_sum;
    for(int i=k; i<n; i++){
        curr_sum+=(arr[i]-arr[i-k]);
        max_sum=max(max_sum, curr_sum);
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k;
    cin>>k;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<sumofK(arr, k, n);
}