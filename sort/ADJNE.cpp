#include<bits/stdc++.h>
using namespace std;

void adjacent(int arr[], int n){
    vector<int>v;
    v.push_back(arr[0]);
    for(int i=1;i<n-1;i++){
       
        if(arr[i]!=arr[i-1]){
            v.push_back(arr[i]);
            }
            else{
                v.push_back(arr[i+1]);
                v.push_back(arr[i]);
            }
        }
    
    for(int x = 0; x<v.size()-1; x++)
    {
        cout<<v[x]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements you want to enter"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Elements after sorting is"<<" ";

    adjacent(arr, n);
    
}