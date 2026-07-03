// Last updated: 7/4/2026, 12:15:53 AM
1class Solution {
2public:
3    int maxScore(string s) 
4    {
5        int zero=0, one=0; 
6        for (char c: s){
7            if (c == '0') zero++; 
8            else one++; 
9        }    
10
11        int ptr=0, ans=0, left=0, right=one; 
12        while (ptr < s.size()-1){
13            if (s[ptr] == '0'){
14                left++; 
15            }
16            else if (s[ptr] == '1'){
17                right--; 
18            }
19            ans = max(ans, left+right); 
20            ptr++; 
21        }
22
23        return ans; 
24    }
25};