#include <bits/stdc++.h>
using namespace std;

 vector<int> shuffle(vector<int>& nums, int n) {
        int num=n*2;
        int mid=floor(num/2);
        vector<int>v1,v2,v3;
        for(int i=0; i<mid; i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=mid; i<num; i++)
        {
            v2.push_back(nums[i]);
        }
        int i=0;
        while(i<n)
        {
            v3.push_back(v1[i]);
            v3.push_back(v2[i]);
            i++;
        }
        return v3;
    }