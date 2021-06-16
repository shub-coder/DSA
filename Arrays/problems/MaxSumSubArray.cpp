#include<bits/stdc++.h>
using namespace std;

int max_sum(int arr[], int n){
    int res = 0;
    int b = arr[0];
    for(int i=1; i<n; i++){
        b = max(b+arr[i], arr[i]);
        res = max(res, b);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<max_sum(arr,n);
}