// Last updated: 6/3/2026, 11:32:47 PM
#include <cctype>
class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st; 
        for (string i: tokens){
            if (i != "+" && i != "/" && i != "*" && i != "-") st.push(stoi(i)); 
            else{
                int n1 = st.top(); st.pop();
                int n2 = st.top(); st.pop();
                int ans=0; 
                if (i == "+") ans = n2+n1; 
                else if (i == "*") ans = n2*n1; 
                else if (i == "/") ans = n2/n1; 
                else if (i == "-") ans = n2-n1;
                st.push(ans); 
            }
        } 
        return st.top();    
    }
};