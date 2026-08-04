// Last updated: 8/4/2026, 11:45:51 AM
1class Solution {
2public:
3    int minCostClimbingStairs(vector<int>& cost) 
4    {
5        vector<int> dp(cost.size()+1, 0); 
6        dp[0]=0; dp[1]=0; 
7        for (int i=2; i<=cost.size(); i++){
8            int left = dp[i-1] + cost[i-1]; 
9            int right = dp[i-2] + cost[i-2];
10
11            dp[i] = min(left, right); 
12        }
13        return dp[cost.size()]; 
14    }
15};