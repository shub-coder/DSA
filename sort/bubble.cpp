#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped  = true;
            }
        }
        if(swapped==false)
          break;
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
    bubbleSort(arr, n);
    cout<<"Array after iterative bubble sort:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
    

}