/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.*/
#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        int c=0;
        for(int i=0; i<n; i++)
        {
            int k=nums[i], j=0;
            while(j<n)
            {
                if(nums[j]<k)
                    c++;
                j++;
            }
            v.push_back(c);
            c=0;
        }
        return v;
    }