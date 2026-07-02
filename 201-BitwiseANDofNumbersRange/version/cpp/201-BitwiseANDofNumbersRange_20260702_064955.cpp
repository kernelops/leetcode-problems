// Last updated: 7/2/2026, 6:49:55 AM
1class Solution {
2public:
3    int rangeBitwiseAnd(int left, int right) 
4    {
5        int shift = 0; 
6        while (left != right){
7            left = left >> 1; 
8            right = right >> 1; 
9            shift ++; 
10        }    
11
12        return left << shift; 
13    }
14};