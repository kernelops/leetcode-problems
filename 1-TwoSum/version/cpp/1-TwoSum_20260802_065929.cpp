// Last updated: 8/2/2026, 6:59:29 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i=0; i<nums.size(); i++){
7            mpp[nums[i]] = i; 
8        } 
9
10        for (int i=0; i<nums.size(); i++){
11            int need = target - nums[i];
12
13            if (mpp.count(need) && mpp[need] != i)
14                return {i, mpp[need]};  
15        }
16
17        return {}; 
18    }
19};