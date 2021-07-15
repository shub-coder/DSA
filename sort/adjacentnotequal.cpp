#include<bits/stdc++.h>
using namespace std;

int adjacent(int arr[], int n){
    int c=0,r=0;
    if(n%2==0){
    for(int i=1;i<n;i++){
       
        if(arr[c]!=arr[i]){
            swap(arr[i],arr[c]);
            c=c+2;
        }
        
    }
    
}
else
{
    for(int i=1;i<n;i++){
       
        if(arr[c]!=arr[i]){
            swap(arr[i],arr[c]);
            c=c+2;
        }
        else
          c++;
    }
}
for(int i=0; i<n-1; i++)
{
    if(arr[i]==arr[i+1]){
        return -1;
        break;
    }
}
return 0;
}
int main(){
    int n,b;
    cout<<"Enter the number of elements you want to enter"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Elements after sorting is"<<" ";

    b=adjacent(arr, n);
    if(b==-1)
       cout<<"Not possible to arrange this array"<<" ";
    else{   
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
}