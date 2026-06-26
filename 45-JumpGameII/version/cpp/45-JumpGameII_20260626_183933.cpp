// Last updated: 6/26/2026, 6:39:33 PM
1class Solution {
2public:
3    int jump(vector<int>& nums) 
4    {
5        int jump=0, current=0, farthest=0; 
6
7        for (int i=0; i<nums.size()-1; i++){
8            farthest = max(farthest, i+nums[i]); 
9
10            if (i == current){
11                jump++; 
12                current = farthest; 
13
14                if (current >= nums.size()-1) break; 
15            }
16        }    
17
18        return jump; 
19    }
20};