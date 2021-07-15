#include<bits/stdc++.h>
using namespace std;

void iSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    iSort(arr, n);
    cout<<"Array after iterative insertion sorting:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
}
            