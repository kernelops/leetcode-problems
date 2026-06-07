// Last updated: 6/7/2026, 11:24:36 AM
class Solution {
public:
    int arrangeCoins(int n) 
    {
        int ans = floor((-1+sqrt(1+8LL*n))/2); 
        return ans;     
    }
};