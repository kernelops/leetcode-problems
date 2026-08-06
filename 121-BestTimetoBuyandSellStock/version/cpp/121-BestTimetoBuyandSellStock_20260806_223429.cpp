// Last updated: 8/6/2026, 10:34:29 PM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) 
4    {
5        if (prices.size() < 2) return 0; 
6        
7        int l = 0, r = 1, ans=prices[r] - prices[l]; 
8        while (r < prices.size()){
9            ans = max(ans, prices[r] - prices[l]);
10
11            if (prices[l] > prices[r]){
12                l++; 
13            }
14            else r++;  
15        }    
16
17        return ans; 
18    }
19};