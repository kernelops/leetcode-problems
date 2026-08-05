// Last updated: 8/5/2026, 4:59:55 PM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) 
4    {
5        stack<int> st; 
6        for (string c: tokens){
7            if (c == "+" || c == "-" || c == "*" || c == "/"){
8                int num1 = st.top(); st.pop(); 
9                int num2 = st.top(); st.pop(); 
10
11                if (c == "+") st.push(num2+num1); 
12                else if (c == "-") st.push(num2-num1); 
13                else if (c == "*") st.push(num2*num1); 
14                else if (c == "/") st.push(num2/num1); 
15            }
16            else st.push(stoi(c));
17        }
18
19        return st.top(); 
20    }
21};