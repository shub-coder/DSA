#include<bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n){
    int res=-1, largest=0;
    for(int i=0; i<n; i++){
        if (arr[i]>res){
            largest=arr[i];
            res=i;
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
    int q= LargestElement(arr, n);
    cout<<q;
}