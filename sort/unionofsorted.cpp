#include<bits/stdc++.h>
using namespace std;

void _union(int a[], int b[], int c[],  int m, int n){
    int i=0;
    int j=0;
    int p=0;
    while(i<m && j<n){
        if (a[i]<b[j]){
            c[p]=a[i];
            p++;
        }
        else if(a[i]>b[j]){
            c[p]=b[j];
            p++;
        }
        else{
            if(i<m){
                c[p]=a[i];
                p++;
            }
            else
            {
                c[p]=b[j];
                p++;
            }
        }
    }
}
int main(){
    int m,n;
    cin>>m;
    cin>>n;
    int a[m];
    int b[n];
    int k=m+n;
    int c[k];
    for(int i=0; i<m; i++){
        cin>>a[i];
    }
    for(int j=0; j<n; j++){
        cin>>b[j];
    }
    _union(a,b,c,m,n);
    for(int i=0; i<k; i++){
        cout<<c[i]<<" ";
    }
    return 0;
}