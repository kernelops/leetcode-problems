// Last updated: 6/3/2026, 11:30:08 PM
class Solution {
public:
    int fib(int n) 
    {
        if (n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};