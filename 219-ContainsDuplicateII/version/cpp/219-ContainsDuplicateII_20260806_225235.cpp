// Last updated: 8/6/2026, 10:52:35 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i=0; i<nums.size(); i++){
7            if (mpp.find(nums[i]) != mpp.end()){
8                if (abs(i - mpp[nums[i]]) <= k) return true; 
9            }
10
11            mpp[nums[i]] = i; 
12        }    
13
14        return false; 
15    }
16};