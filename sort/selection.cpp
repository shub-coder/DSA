#include<bits/stdc++.h>
using namespace std;

void selection(int arr[], int n){
    for(int i=0; i<n; i++){
        int l_idx = i;
        for(int j=i+1; j<n; i++){
        if(arr[l_idx]>arr[j])
            l_idx=j;
        swap(arr[l_idx], arr[j]);
        }
        
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements you want"<<" ";
    cin>>n;
    int arr[n];
    cout<<"randomnly generated"<<" "<<n<<" "<<"elements are"<<" "<<endl;
    for(int i=0; i<n; i++){
        arr[i]=rand();
    }
    for(int i=0; i<n; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    selection(arr, n);
    cout<<"Array after iterative Selection sorting:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
}
            