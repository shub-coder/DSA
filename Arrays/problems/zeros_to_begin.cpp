#include<bits/stdc++.h>
using namespace std;

void zerosend(int arr[], int n){
    int count = n-1;
    for(int i=n-1; i>=0; i--){
        if(arr[i]!=0){
            swap(arr[count], arr[i]);
            count--;
        }
    }
    for(int i = 0; i<n; i++){
      cout<< arr[i];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    zerosend(arr,n);
    return 0;
}