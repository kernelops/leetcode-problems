// Last updated: 6/29/2026, 11:26:14 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) 
4    {
5        int pos=0; 
6        for (int i: nums){
7            if (i != 0){
8                nums[pos] = i; 
9                pos++; 
10            }
11        }    
12
13        for (int i=pos; i<nums.size(); i++)
14            nums[i] = 0; 
15    }
16};