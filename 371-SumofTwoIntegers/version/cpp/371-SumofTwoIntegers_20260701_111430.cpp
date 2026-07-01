// Last updated: 7/1/2026, 11:14:30 AM
1class Solution {
2public:
3    int getSum(int a, int b) 
4    {
5        int ans = (a^b) + 2*(a&b);
6        return ans;     
7    }
8};