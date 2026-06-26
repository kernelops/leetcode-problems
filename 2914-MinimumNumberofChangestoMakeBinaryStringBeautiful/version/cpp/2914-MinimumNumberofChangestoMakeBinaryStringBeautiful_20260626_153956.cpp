// Last updated: 6/26/2026, 3:39:56 PM
1class Solution {
2public:
3    int minChanges(string s) 
4    {
5        // count number of adjacent differnt elements
6        int count=0; 
7        for (int i=0; i<s.size()-1; i += 2)
8            if (s[i] != s[i+1]) count++; 
9
10        return count;     
11    }
12};