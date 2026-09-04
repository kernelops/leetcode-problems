// Last updated: 9/5/2026, 12:42:03 AM
1class Solution {
2public:
3    int jump(vector<int>& nums) {
4        if (nums.size() == 1) return 0; 
5        vector<int> jumps(nums.size()); 
6        for (int i=0; i<nums.size(); i++) 
7            jumps[i] = nums[i] + i; 
8        
9        int ans=0, maxJump=0, currentJump=0; 
10        for (int i=0; i<jumps.size(); i++) {
11            maxJump = max(maxJump, jumps[i]); 
12            if (i == currentJump) {
13                ans++; 
14                currentJump = maxJump; 
15            }
16
17            if (currentJump >= nums.size()-1) break; 
18        }
19
20        return ans; 
21    }
22};