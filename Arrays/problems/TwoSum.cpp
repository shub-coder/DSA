//GIVEN ARRAY AND A TARGET WE NEED TO PRINT INDICES OF ELEMENTS WHOSE SUM MAKEUP THE TARGET
#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    
    for (int i = 0;; ++i) {
        auto it = imap.find(target - nums[i]);
        
        if (it != imap.end()) 
            return vector<int> {i, it->second};
            
        imap[nums[i]] = i;
    }
}
    
        