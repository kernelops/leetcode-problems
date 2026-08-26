// Last updated: 8/27/2026, 12:27:14 AM
1class Solution {
2public:
3    string shortestBeautifulSubstring(string s, int k) 
4    {
5        int l=0, r=0, cnt=0, ans_size=INT_MAX; string ans=""; 
6        while (r < s.size()) {
7            if (s[r] == '1') cnt++; 
8            r++; 
9
10            while (cnt == k && l < r) { 
11                if ((r-l) < ans_size){
12                    ans_size = r-l; 
13                    ans = s.substr(l, r-l); 
14                }
15                else if ((r-l) == ans_size) {
16                    if (s.substr(l, r-l) < ans) ans = s.substr(l, r-l); 
17                }
18
19                if (s[l] == '1') cnt--; 
20                l++; 
21            }
22        }  
23
24        return ans;   
25    }
26};