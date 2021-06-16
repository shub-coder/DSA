#include<bits/stdc++.h>
using namespace std;

int deleteElement(int arr[], int x, int n){
    int i;
    for (i=0; i<n; i++){
        if(arr[i]==x){
            break;
        }
        if(i==n)
          return n;
    
    for(int j=i; j<n; j++){
        arr[i]=arr[j+1];
    }
    }
    return (n-1);

}
int main(){
    int n, x;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter element to delete"<<" ";
    cin>>x;
    int q = deleteElement(arr, x, n);
    cout<<q;
}