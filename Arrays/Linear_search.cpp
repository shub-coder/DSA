#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
            return i;
    }
    return -1; 
}       

int main(){
    int n, a;
    cout<<"Enter the size of array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element whose index you want"<<" ";
    cin>>a;
    int s = search(arr, a, n);
    if(s!=-1){
        cout<<"Element found at index:"<<" "<<s;
    }
    else{
        cout<<"Enter correct search element"<<" ";
    }
return 0;
}