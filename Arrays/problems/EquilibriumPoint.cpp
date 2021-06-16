#include<bits/stdc++.h>
using namespace std;

int Equilibrium(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum +=arr[i];
    }
    int l_sum=0;
    for(int i=0; i<n; i++){
        if(l_sum==sum - arr[i])
           return 1;
        l_sum +=arr[i];
        sum -=arr[i];  
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<Equilibrium(arr,n);
}