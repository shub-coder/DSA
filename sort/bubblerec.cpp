#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    if(n==1)
       return;
    for(int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
            }
    bubbleSort(arr,n-1);
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
    bubbleSort(arr, n);
    cout<<"Array after bubble sorting:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
}
            