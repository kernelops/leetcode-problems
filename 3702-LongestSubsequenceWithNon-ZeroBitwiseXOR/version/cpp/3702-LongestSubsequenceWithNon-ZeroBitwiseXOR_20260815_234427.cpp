// Last updated: 8/15/2026, 11:44:27 PM
1class Solution {
2public:
3    int longestSubsequence(vector<int>& nums) 
4    {
5        int ans=0; 
6        for (int i: nums) ans = ans ^ i; 
7
8        if (ans != 0) return nums.size(); 
9
10        for (int i: nums){
11            if (i != 0) return nums.size()-1; 
12        }
13
14        return 0; 
15    }
16};