// Last updated: 9/5/2026, 10:17:38 AM
1class Solution {
2public:
3    bool checkValidString(string s) {
4        stack<char> paren; 
5        stack<char> star; 
6
7        for (int i=0; i<s.size(); i++) {
8            char c = s[i]; 
9            if (c == '(') paren.push(i); 
10            else if (c == ')') {
11                if (!paren.empty()) paren.pop(); 
12                else if (!star.empty()) star.pop(); 
13                else return false; 
14            }
15            else star.push(i); 
16        } 
17
18        while (!paren.empty() && !star.empty()) {
19            if (paren.top() > star.top()) return false; 
20            paren.pop(); 
21            star.pop(); 
22        }
23
24        return paren.empty(); 
25    }
26};