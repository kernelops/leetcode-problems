// Last updated: 8/5/2026, 3:01:42 PM
1class Solution {
2public:
3    string minWindow(string s, string t) 
4    {
5        if (t.size() > s.size()) return "";  
6
7        vector<int> freq(128, 0);
8        for (char c: t) freq[c]++; 
9
10        int l=0, r=0; 
11        int count = t.size(); 
12        string ans=""; int minLen=INT_MAX; 
13        int start=0;
14
15        while (r<s.size()){
16            if  (freq[s[r]] > 0){
17                count--;  
18            }
19            freq[s[r]]--; 
20
21            while (count == 0){
22                if ((r-l+1) < minLen){
23                    minLen = r-l+1; 
24                    //ans = s.substr(l, minLen); reason for resulting in Memory Limit Exceeded
25                    start=l;
26                }
27
28                freq[s[l]]++; 
29
30                if (freq[s[l]] > 0) count++; 
31                l++; 
32            }
33            r++; 
34        }
35
36        return minLen == INT_MAX ? "" : s.substr(start, minLen);
37    }
38};