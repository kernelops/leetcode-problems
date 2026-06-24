// Last updated: 6/24/2026, 6:17:11 PM
1class Solution {
2public:
3    int buyChoco(vector<int>& prices, int money) 
4    {
5        sort(prices.begin(), prices.end()); 
6
7        if ((prices[0] + prices[1]) > money) return money; 
8
9        return money - (prices[0]+prices[1]);     
10    }
11};