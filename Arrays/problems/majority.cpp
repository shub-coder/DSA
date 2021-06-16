#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n){
    int c=1, res=0;
    for(int i=0; i<n; i++){
        if(arr[res]==arr[i])
            c++;
        
        else
            c--;
        
    
    if(c==0){   //THIS IS THE MAIN AND THE MOST IMPORTANT CONDITION OF TO SELECT MAJORITY ELEMENT 
        res = i;
        c=1;
    }
    }
    return arr[res];
}
    bool isMajority(int arr[], int n, int cand)
{
    int count = 0;
    for (int i = 0; i < n; i++)
 
        if (arr[i] == cand)
            count++;
 
    if (count > n / 2)
        return 1;
 
    else
        return 0;
}
void printMajority(int arr[], int n)
{
    int cand = majorityElement(arr, n);
 
    if (isMajority(arr, n, cand))
        cout << " " << cand << " ";
 
    else
        cout << "No Majority Element";
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    printMajority(arr, n);

}