// Last updated: 9/4/2026, 11:29:40 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) 
4    {
5        priority_queue<int> forward; 
6        priority_queue<int, vector<int>, greater<int>> backward; 
7        for (int i: nums) 
8            backward.push(i);   
9
10        vector<int> ans; 
11        for (int i=0; i<nums.size(); i++) {
12            for (int j=i; j<nums.size(); j++)
13                backward.push(nums[j]); 
14            forward.push(nums[i]); 
15            int maxi = forward.top(); 
16            int mini = backward.top(); 
17
18            ans.push_back(maxi-mini); 
19            backward = {};  
20        }
21
22        for (int i=0; i<ans.size(); i++) {
23            if (ans[i] <= k) return i; 
24        }
25
26        return -1; 
27    }
28};