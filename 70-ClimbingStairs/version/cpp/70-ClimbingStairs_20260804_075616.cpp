// Last updated: 8/4/2026, 7:56:16 AM
1class Solution {
2public:
3    int func (int n, vector<int> &dp){
4        if (n == 0 || n == 1) return 1; 
5        if (dp[n] != -1) return dp[n]; 
6
7        int left = func(n-1, dp); 
8        int right = func(n-2, dp);  
9
10        return dp[n] = left + right;
11    }
12    int climbStairs(int n) 
13    {
14        vector<int> dp(n+1, -1); 
15        return func(n, dp); 
16    }
17};