// Last updated: 7/3/2026, 7:54:05 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) 
4    {
5        bool inc = true, dec = true;  
6        for (int i=1; i<nums.size(); i++){
7            if (nums[i] > nums[i-1]) dec = false; 
8            else if (nums[i] < nums[i-1]) inc = false; 
9        }    
10
11        return inc || dec; 
12    }
13};