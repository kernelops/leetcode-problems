// Last updated: 8/2/2026, 11:30:04 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) 
4    {
5        int l = 0, r = 1, ans = 0; 
6        while (r < prices.size()){
7            if (prices[l] > prices[r]){
8                l = r; r++; 
9            }
10            else{
11                ans = max(ans, prices[r] - prices[l]); 
12                r++; 
13            }
14        }
15
16        return ans; 
17    }
18};