#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
    int curr_lead = arr[n-1];
    for(int i=n-2; i>=0; i--){
        if(arr[i]>curr_lead){
            curr_lead = arr[i];
            cout<<curr_lead<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    leaders(arr, n);
    return 0;
}