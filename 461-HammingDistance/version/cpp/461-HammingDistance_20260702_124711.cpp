// Last updated: 7/2/2026, 12:47:11 PM
1class Solution {
2public:
3    int hammingDistance(int x, int y) 
4    {
5        int num = x^y; 
6        int count=0; 
7        for (int i=0; i<32; i++)    
8            if (num & (1<<i)) count++; 
9        
10        return count; 
11    }
12};