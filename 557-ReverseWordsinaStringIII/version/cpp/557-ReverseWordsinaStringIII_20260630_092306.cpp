// Last updated: 6/30/2026, 9:23:06 AM
1class Solution {
2public:
3    string reverseWords(string s) 
4    {
5        string ans=""; int i=0;
6        while (i < s.size()){
7            string word=""; 
8            while (i < s.size() && !isspace(s[i])) {
9                word += s[i++];
10            }
11
12            reverse(word.begin(), word.end()); 
13            ans += word;
14
15            while (i < s.size() && isspace(s[i])) {
16                ans += s[i++];
17            } 
18        }    
19
20        return ans; 
21    }
22};