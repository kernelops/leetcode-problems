// Last updated: 8/4/2026, 11:28:02 AM
1class Solution {
2public:
3    int f(int idx, vector<int>& cost, vector<int>& dp){
4        if (idx == 0) return 0; 
5        if (idx == 1) return 0;
6        if (dp[idx] != -1) return dp[idx];  
7
8        int left = f(idx-1, cost, dp) + cost[idx-1]; 
9        int right = f(idx-2, cost, dp) + cost[idx-2];
10
11        return dp[idx] = min (left, right);  
12    }
13    int minCostClimbingStairs(vector<int>& cost) 
14    {
15        vector<int> dp(cost.size()+1, -1); 
16        return f(cost.size(), cost, dp); 
17    }
18};