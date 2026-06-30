// Last updated: 6/30/2026, 1:12:47 PM
1class Solution {
2public:
3    vector<int> rearrangeArray(vector<int>& nums) 
4    {   
5        if (nums.size() < 3) return nums; 
6        if (nums.size() == 3){
7            if (nums[1]*2 == (nums[0]+nums[2]))
8                swap(nums[2], nums[1]); 
9            return nums; 
10        }
11
12        for (int i=1; i<nums.size()-1; i++){
13            int left = nums[i-1], right = nums[i+1]; 
14            if (2*nums[i] == (left+right)){
15                if (i <= nums.size()-3)
16                    swap(nums[i+1], nums[i+2]); 
17                else{
18                    swap(nums[i+1], nums[0]); 
19                    swap(nums[0], nums[1]); 
20                }
21            }
22        }    
23
24        return nums; 
25    }
26};