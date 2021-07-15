#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int a, int end){
    int n1=a-start+1, n2 = end-a;
    int left[n1],right[n2];
    for(int s=0;s<n1;s++)
       left[s]=arr[start+s];
    
    for(int p=0;p<n2;p++)
       right[p]=arr[a+1+p];
    
    int s=0,p=0,k=start;
    
    while(s<n1&&p<n2){
        if(left[s]<=right[p]){
            arr[k++]=left[s++];
        }
        else{
            arr[k++]=right[p++];
        }
    }      
    
    while(s<n1){
        arr[k++]=left[s++];
    }
    
    while(p<n2)
    {
        arr[k++]=right[p++];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start<end){
        int a = start + (end - start)/2;
        mergeSort(arr, start, a);
        mergeSort(arr, a+1,end);
        merge(arr, start, a, end);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements you want in the array"<<" ";
    cin>>n;
    int arr[n];
    int start=0, end=n-1;
    for(int s=0; s<n; s++){
        arr[s]=rand();
    }
    cout<<"Elements of array are:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
    cout<<endl;

    mergeSort(arr, start, end);
    cout<<"Array after Merge sorting:-"<<" "<<endl;
    for(int s=0; s<n; s++){
        cout<<arr[s]<<" ";
    }
}