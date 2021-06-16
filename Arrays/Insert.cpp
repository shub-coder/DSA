#include<bits/stdc++.h>
using namespace std;

void insert(int arr[], int x, int n, int pos){
    int index=pos-1;
    int temp = arr[n-1];
    for(int i=n-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=x;
    arr[n+1]=temp;
    for(int j=0; j<n+1; j++){
        cout<<arr[j]<<" ";
    }
   
}
int main(){
    int n, pos, x;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter position and element"<<" ";
    cin>>pos;
    cin>>x;
    insert(arr, x, n, pos);

}