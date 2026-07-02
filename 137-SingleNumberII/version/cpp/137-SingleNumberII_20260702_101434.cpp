// Last updated: 7/2/2026, 10:14:34 AM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) 
4    {
5        sort(nums.begin(), nums.end()); 
6
7        int ptr = 1; 
8        while (ptr < nums.size()){
9            if (nums[ptr] == nums[ptr-1] && nums[ptr] == nums[ptr+1]){
10                ptr += 3; continue; 
11            }
12            else return nums[ptr-1]; 
13        }    
14
15        return nums[nums.size()-1]; 
16    }
17};