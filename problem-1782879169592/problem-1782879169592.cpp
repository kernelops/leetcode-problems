// Last updated: 7/1/2026, 9:42:49 AM
1class Solution {
2public:
3    string toBinary(int n){
4        string ans=""; 
5        while (n>0){
6            if (n%2 == 1) ans += '1'; 
7            else ans += '0'; 
8            n = n/2; 
9        }
10
11        reverse(ans.begin(), ans.end()); 
12        return ans; 
13    }
14    int minBitFlips(int start, int goal) 
15    {
16        string st = toBinary(start); 
17        string g = toBinary(goal); 
18
19        while (st.size() < g.size()) st = '0' + st; 
20        while (g.size() < st.size()) g = '0' + g;
21
22        int count=0; 
23        for (int i=0; i<g.size(); i++)
24            if (st[i] != g[i]) count++; 
25        
26        return count; 
27    }
28};