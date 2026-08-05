// Last updated: 8/5/2026, 4:50:38 PM
1class Solution {
2public:
3    bool isValid(string s) 
4    {
5        stack<char> st; 
6        for (char c: s){
7            if (c == '(' || c == '{' || c == '[') st.push(c); 
8            if (c == ')'){
9                if (st.empty() || st.top() != '(') return false;
10                else st.pop(); 
11            }
12            if (c == '}'){
13                if (st.empty() || st.top() != '{') return false;
14                else st.pop();
15            }
16            if (c == ']'){
17                if (st.empty() || st.top() != '[') return false; 
18                else st.pop(); 
19            }
20        }    
21
22        if (st.empty()) return true; 
23        return false; 
24    }
25};