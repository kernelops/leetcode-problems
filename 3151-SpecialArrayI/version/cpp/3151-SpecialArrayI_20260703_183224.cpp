// Last updated: 7/3/2026, 6:32:24 PM
1class Solution {
2public:
3    bool isArraySpecial(vector<int>& nums) 
4    {
5        if (nums.size() == 1) return true; 
6
7        for (int i=1; i<nums.size(); i++){
8            if (nums[i] % 2 == 0){
9                if (nums[i-1] % 2 == 0) return false; 
10            }
11
12            if (nums[i] % 2 != 0){
13                if (nums[i-1] % 2 != 0) return false; 
14            }
15        }  
16
17        return true;   
18    }
19};