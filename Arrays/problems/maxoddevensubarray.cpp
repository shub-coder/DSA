#include<bits/stdc++.h>
using namespace std;

int maxoddeven(int arr[], int n){
    int res = 1;
    int b=1;
    for(int i=1; i<n; i++){
        if((arr[i]%2==0 && arr[i-1]%2!=0)|| (arr[i]%2!=0 && arr[i-1]%2==0)){
            b++;
            res = max(res, b);
        }
        else {
            b=1;
        }
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
    cout<<maxoddeven(arr,n);
}