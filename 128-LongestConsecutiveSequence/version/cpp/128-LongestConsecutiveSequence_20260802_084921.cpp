// Last updated: 8/2/2026, 8:49:21 AM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) 
4    {
5        if (nums.empty()) return 0; 
6        priority_queue<int, vector<int>, greater<int>> pq; 
7        for (int i: nums) pq.push(i); 
8
9        int ans=1; int count=1; 
10        
11        int prev = pq.top(); pq.pop();
12        while (!pq.empty()){
13            int val = pq.top(); pq.pop(); 
14            if (prev == val) continue;
15            else if (prev + 1 == val) count++;  
16            else count=1;
17
18            ans = max(ans, count); 
19            prev = val; 
20        }     
21
22        return ans; 
23    }
24};