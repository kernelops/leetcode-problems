// Last updated: 6/30/2026, 11:34:18 AM
1class Solution {
2public:
3    int compress(vector<char>& chars) 
4    {
5        int n=0, i=0; string ans=""; int count=1; 
6        for (i=1; i<chars.size(); i++){
7            if (chars[i] == chars[i-1])
8                count++; 
9            else{
10                ans += chars[i-1]; 
11                if (count>1) ans += to_string(count); 
12                count=1; 
13            }
14        }
15        ans += chars.back(); 
16        if (count>1) ans += to_string(count);
17
18        // copying ans back to chars
19        for (int i = 0; i < ans.size(); i++)
20            chars[i] = ans[i];
21
22        return ans.size(); 
23    }
24};