// Last updated: 9/5/2026, 12:45:30 AM
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        int jump=0, currentEnd=0, farthest=0; 
5        for (int i=0; i<nums.size()-1; i++) {
6            farthest = max(farthest, i + nums[i]); 
7
8            if (i == currentEnd) {
9                jump++;
10                currentEnd = farthest; 
11            }
12        }
13
14        return jump;
15    }
16};