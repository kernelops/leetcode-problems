// Last updated: 8/2/2026, 7:01:41 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) 
4    {
5        unordered_map<int, int> mpp;
6
7        for (int i = 0; i < nums.size(); i++){
8            int need = target - nums[i];
9
10            if (mpp.count(need))
11                return {mpp[need], i};
12
13            mpp[nums[i]] = i;
14        }
15
16        return {}; 
17    }
18};