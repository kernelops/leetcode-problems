// Last updated: 6/30/2026, 9:53:42 AM
1class Solution {
2public:
3    string function(string s){
4        stack<char> st;
5        for (char c: s){
6            if (c != '#') st.push(c); 
7            else if (!st.empty()) st.pop(); 
8        } 
9
10        string ans=""; 
11        while (!st.empty()){
12            ans += st.top(); st.pop(); 
13        }
14
15        return ans; 
16    }
17    bool backspaceCompare(string s, string t) 
18    {
19        string s1 = function(s); 
20        string t1 = function(t); 
21
22        return s1 == t1; 
23    }
24};