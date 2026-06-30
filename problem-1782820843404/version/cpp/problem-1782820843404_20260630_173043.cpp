// Last updated: 6/30/2026, 5:30:43 PM
1class Solution {
2public:
3    int minimumLength(string s) 
4    {
5        int l = 0, r = (int)s.size() - 1;
6        int size = (int)s.size();
7
8        while (l < r && s[l] == s[r]) {
9            char c = s[l];
10
11            while (l <= r && s[l] == c) {
12                l++;
13                size--;
14            }
15
16            while (l <= r && s[r] == c) {
17                r--;
18                size--;
19            }
20        }
21
22        return size;
23    }
24};