#include <bits/stdc++.h>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) 
    {
        int diff = INT_MAX, n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 0;
        while(i < n && diff!=0)
        {
            int lo = i + 1, hi = n - 1;
            while(lo < hi)
            {
                int sum = nums[i] + nums[lo] + nums[hi];
                if (abs(target-sum) < abs(diff))
                    diff = target - sum;
                if (sum < target)
                    lo++;
                else 
                    hi--;  
            }
            i++;
        }
        
        return target - diff;
    }