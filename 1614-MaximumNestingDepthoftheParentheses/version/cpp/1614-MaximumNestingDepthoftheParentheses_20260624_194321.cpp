// Last updated: 6/24/2026, 7:43:21 PM
1class Solution {
2public:
3    int maxDepth(string s) 
4    {   
5        int ans=INT_MIN, current=0; 
6        for (char c: s){
7            if (c=='(') current++; 
8            if (c==')') current--; 
9            ans = max(ans, current); 
10        }    
11
12        return ans; 
13    }
14};