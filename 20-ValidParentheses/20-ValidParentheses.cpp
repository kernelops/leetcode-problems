// Last updated: 6/3/2026, 11:34:39 PM
class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st; 
        for (char c: s){
            if (c == '(' || c == '{' || c == '[')
                st.push(c); 
            
            if (c == ')'){
                if (st.empty() || st.top() != '(') return false;
                else st.pop();
            } 
            if (c == '}'){
                if (st.empty() || st.top() != '{') return false;
                else st.pop();
            }
            if (c == ']'){
                if (st.empty() || st.top() != '[') return false;
                else st.pop();
            }
        }    
        if (st.empty()) return true; 
        return false;
    }
};