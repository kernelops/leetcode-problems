// Last updated: 7/9/2026, 11:58:05 PM
class Solution {
public:
    string function(string s){
        stack<char> st;
        for (char c: s){
            if (c != '#') st.push(c); 
            else if (!st.empty()) st.pop(); 
        } 

        string ans=""; 
        while (!st.empty()){
            ans += st.top(); st.pop(); 
        }

        return ans; 
    }
    bool backspaceCompare(string s, string t) 
    {
        string s1 = function(s); 
        string t1 = function(t); 

        return s1 == t1; 
    }
};