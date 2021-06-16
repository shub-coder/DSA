#include<bits/stdc++.h>
using namespace std;

int Largest(int arr[], int n){
    int res=0;
    for(int i=0; i<n; i++){
        if (arr[i]>arr[res]){
            res = i;
        }
    }
    return res;
}
int second_largest(int arr[], int n){
    int res = -1;
    int largest = Largest(arr,n);
    for(int i=0; i<n; i++){
        if(arr[i]!=arr[largest]){
            if(res == -1){
                res = i;
            }
            else if(arr[i]>arr[res]){
                res = i;
            }
            
        }
    }
return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int q= second_largest(arr, n);
    cout<<q;
}
/* The above implementation is Naive
Efficient Approach:
int secondlargest(int arr[], int n){
    int res=-1, largest = 0;
    for (int i=0; i<n; i++){
        if (arr[i]>arr[Largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i]!=arr[largest]){
            if(res==-1 || arr[i]>arr[res]){
                res = i;

        }

        }
        
    }
    return res;
}*/