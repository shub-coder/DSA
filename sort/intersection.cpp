#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
        continue;

        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        
    }
}

int main(){
    int m, n;
    
    cout<<"Enter the values of m and n then fill elements in a and b"<<"\n";
    cin>>m;
    cin>>n;
    int a[m], b[n];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    intersection(a,b,m,n);
    return 0;
}