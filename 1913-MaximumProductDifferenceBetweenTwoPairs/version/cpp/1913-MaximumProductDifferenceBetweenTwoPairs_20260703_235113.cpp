// Last updated: 7/3/2026, 11:51:13 PM
1class Solution {
2public:
3    int maxProductDifference(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end()); 
6
7        return (nums[nums.size()-1] * nums[nums.size()-2]) - (nums[0] * nums[1]);     
8    }
9};