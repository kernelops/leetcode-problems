// Last updated: 6/3/2026, 11:34:27 PM
class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        return dividend / divisor;
    }
};