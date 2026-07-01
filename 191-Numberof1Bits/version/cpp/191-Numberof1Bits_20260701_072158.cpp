// Last updated: 7/1/2026, 7:21:58 AM
1class Solution {
2public:
3    int hammingWeight(int n) 
4    {
5        int count=0; 
6        for (int i=0; i<32; i++){
7            if (n & (1<<i)) count++; 
8        }    
9
10        return count; 
11    }
12};