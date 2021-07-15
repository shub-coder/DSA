#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

void Sorteven(int even[], int c){
    for(int i=0; i<c; i++){
        bool swapped = false;
        for(int j=0; j<c-i-1; j++){
            if(even[j]>even[j+1]){
                swap(even[j],even[j+1]);
                swapped  = true;
            }
        }
        if(swapped==false)
          break;
    }
}

void Sortodd(int odd[], int k){
    for(int i=0; i<k; i++){
        bool swapped = false;
        for(int j=0; j<k-i-1; j++){
            if(odd[j]<odd[j+1]){
                swap(odd[j],odd[j+1]);
                swapped  = true;
            }
        }
        if(swapped==false)
          break;
    }
}

void replaceevenodd(int a[], int n)
{
    int c=0, k=0, e=0, o=0;
    int even[n];
    int odd[n];
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        even[c++]=a[i];
        else
        odd[k++]=a[i];
    }
    Sorteven(even, c);
    Sortodd(odd, k);
    c=0;
    k=0;
    for(int i=0; i<n; i++){
        if(i%2==0)
        {
            a[i]=even[c++];
        }
        else
        {
            a[i]=odd[k++];
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    replaceevenodd(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
