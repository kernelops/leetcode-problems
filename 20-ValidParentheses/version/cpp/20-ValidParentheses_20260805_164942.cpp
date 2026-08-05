// Last updated: 8/5/2026, 4:49:42 PM
1class Solution {
2public:
3    bool isValid(string s) 
4    {
5        stack<char> st; 
6        for (char c: s){
7            if (c == '(' || c == '{' || c == '[')
8                st.push(c); 
9            
10            if (c == ')'){
11                if (st.empty() || st.top() != '(') return false;
12                else st.pop();
13            } 
14            if (c == '}'){
15                if (st.empty() || st.top() != '{') return false;
16                else st.pop();
17            }
18            if (c == ']'){
19                if (st.empty() || st.top() != '[') return false;
20                else st.pop();
21            }
22        }    
23        if (st.empty()) return true; 
24        return false;
25    }
26};