#include<bits/stdc++.h>
using namespace std;

int countMerge(int arr[], int start, int mid, int end){
    int n1=mid - start +1, n2 = end - mid;
    int left[n1], right[n2];
    for(int s=0; s<n1; s++){
        left[s] = arr[start + s];
    }
    for(int s = 0; s<n2; s++){
        right[s] = arr[mid + 1 + s];
    }
    int res = 0, s=0, p=0, k=start;
    while(s<n1 && p<n2){
        if(left[s]<=right[p]){
            arr[k]=left[s];
            s++;
        }
        else
        {
            arr[k]=right[p];
            p++;
            res = res + (n1 - s);
           
        }
         k++;
        
    }
    while(s<n1){
        arr[k]=left[s];
        s++;
        k++;
    }
    while(p<n2){
        arr[k]=right[p];
        p++;
        k++;
    }
    return res;
}

int countInv(int arr[], int start, int end){
    int res=0;
    if(start<end){
        int mid = (start + end)/2;
        res += countInv(arr, start, mid);
        res += countInv(arr, mid+1, end);
        res += countMerge(arr, start, mid, end);
    }
    return res;
}



int main(){
    int n;
    //int mid = start + (end - start)/2;
    cout<<"How many elements you want to enter?"<<" ";
    cin>>n;
    int arr[n];
    int  start = 0, end = n-1;
    cout<<"Enter"<<" "<<n<<" "<<"elements in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int b = countInv(arr, start, end);
    cout<<b;
}