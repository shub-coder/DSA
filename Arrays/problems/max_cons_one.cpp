#include<bits/stdc++.h>
using namespace std;

int maxconsone(int arr[], int n){
    int res=1;
    for(int i=1; i<n; i++){
        if(arr[i]==0){
            break;
        }
        else{
            res++;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int b = maxconsone(arr,n);
    cout<<b;
    return 0;
}