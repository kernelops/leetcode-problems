// Last updated: 8/4/2026, 11:46:58 AM
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) 
4    {
5        vector<int> dp(cost.size()+1, 0); 
6        int prev=0; int prev2=0; 
7        for (int i=2; i<=cost.size(); i++){
8            int left = prev + cost[i-1]; 
9            int right = prev2 + cost[i-2];
10
11            int cur = min(left, right); 
12            prev2 = prev; 
13            prev = cur; 
14        }
15        return prev; 
16    }
17};