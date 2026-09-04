// Last updated: 9/4/2026, 11:29:58 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) 
4    {
5        priority_queue<int> forward; 
6        priority_queue<int, vector<int>, greater<int>> backward; 
7
8        vector<int> ans; 
9        for (int i=0; i<nums.size(); i++) {
10            for (int j=i; j<nums.size(); j++)
11                backward.push(nums[j]); 
12            forward.push(nums[i]); 
13            int maxi = forward.top(); 
14            int mini = backward.top(); 
15
16            ans.push_back(maxi-mini); 
17            backward = {};  
18        }
19
20        for (int i=0; i<ans.size(); i++) {
21            if (ans[i] <= k) return i; 
22        }
23
24        return -1; 
25    }
26};