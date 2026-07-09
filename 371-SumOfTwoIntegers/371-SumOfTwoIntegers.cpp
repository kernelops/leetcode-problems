// Last updated: 7/9/2026, 11:59:11 PM
class Solution {
public:
    int getSum(int a, int b) 
    {
        int ans = (a^b) + 2*(a&b);
        return ans;     
    }
};