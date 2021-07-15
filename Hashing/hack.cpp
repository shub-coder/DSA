#include <bits/stdc++.h>
using namespace std;

void longsubarray(int arr[], int n)
{
    vector<int>s;
    int d=0;
    int c=arr[0];
    int res=1;
    for(int i=0; i<n; i++)
    {
        if((arr[i]!=c) && (arr[i]==c+1))
        {
            d=arr[i];
            break;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
        {
          if((arr[i]==c || arr[i]==d) && ((arr[i+1]==arr[i]+1)||(arr[i+1]==arr[i-1]-1)))
           {
               res++;
               cout<<(arr[i])<<" ";
               
           }
        }
    }
    cout<<endl;
    cout<<res;

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
    longsubarray(arr,n);
    
    return 0;
}