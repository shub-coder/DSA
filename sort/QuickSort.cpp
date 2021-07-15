#include<bits/stdc++.h>
using namespace std;

int Lomuto_Partition(int arr[], int start, int end){
    int pivot = arr[end];
    int s = start-1;
    for(int p = start; p<=end-1; p++){
        if(arr[p]<pivot){
            s++;
            swap(arr[s], arr[p]);
        }
    }
    swap(arr[s+1], arr[end]);
    return (s+1);
}

void Quick_sort(int arr[], int start, int end){
    if(start<end){
    int pivot_index = Lomuto_Partition(arr, start, end);
    Quick_sort(arr, start, pivot_index-1);
    Quick_sort(arr, pivot_index+1, end);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements you want in the array"<<" ";
    cin>>n;
    int arr[n];
    int start=0, end=n-1;
    for(int s=0; s<n; s++){
        cin>>arr[s];
    }
    cout<<"Elements of array are:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
    cout<<endl;

    Quick_sort(arr, start, end);
    cout<<"Array after sorting:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
}