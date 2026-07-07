// Last updated: 7/7/2026, 11:35:09 PM
1class Solution {
2public:
3    int arraySign(vector<int>& nums) 
4    {
5        int neg=0; 
6        for (int i: nums) {
7            if (i<0) neg++; 
8            if (i == 0) return 0; 
9        }    
10        if (neg % 2 != 0) return -1; 
11        return 1; 
12    }
13};