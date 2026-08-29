// Last updated: 8/29/2026, 8:17:00 PM
1class Solution {
2public:
3    int minBishopMoves(vector<int>& source, vector<int>& target) 
4    {
5        if (source == target) return 0;
6
7        if (abs(source[0] - target[0]) == abs(source[1] - target[1])) return 1; 
8
9        
10        if ((source[0] + source[1])%2 != (target[0]+target[1])%2) return -1;   
11
12        return 2; 
13    }
14};