#include<bits/stdc++.h>
using namespace std;

int max_diff(int arr[], int n){
    int minvalue = arr[0];
    int res = arr[1]-arr[0];
    for(int i=1; i<n; i++){
        res = max(minvalue, arr[i]-arr[i-1]);
        minvalue = min(minvalue, arr[i]);
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
int o = max_diff(arr, n);
cout<<o<<" ";
}