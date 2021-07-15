#include<iostream>
using namespace std;
 
struct Pair
{
    int min;
    int max;
};
 
struct Pair getMinMax(int arr[], int start, int end)
{
    struct Pair minmax, mml, mmr;    
    int mid;
    if (start == end)
    {
        minmax.max = arr[start];
        minmax.min = arr[end];    
        return minmax;
    }
    if (end == start + 1)
    {
        if (arr[start] > arr[end])
        {
            minmax.max = arr[start];
            minmax.min = arr[end];
        }
        else
        {
            minmax.max = arr[end];
            minmax.min = arr[start];
        }
        return minmax;
    }
    mid = (start + end) / 2;
    mml = getMinMax(arr, start, mid);
    mmr = getMinMax(arr, mid + 1, end);
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;    
     
    
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;    
     
    return minmax;
}
 
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter in array"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     
    struct Pair minmax = getMinMax(arr, 0, n - 1);
                              
    cout << "Minimum element is "<< minmax.min << endl;
    cout << "Maximum element is "<< minmax.max;
          
    return 0;
}