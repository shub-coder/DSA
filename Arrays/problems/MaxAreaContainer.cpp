#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& arr) {
        int i=0,j=arr.size()-1,max_area=0;
        while(i<j){
            int curr_area=min(arr[i],arr[j])*(j-i);
            if (arr[i]< arr[j]) 
                i++;
            else 
                j--;
            max_area=max(max_area,curr_area);
        }
        return max_area;
    }