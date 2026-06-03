// Last updated: 6/3/2026, 11:29:16 PM
class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> st; 
        for (char c: s){
            if (c == '*')
                st.pop(); 
            else st.push(c); 
        }    
        string ans=""; 
        while (!st.empty()){
            ans += st.top(); 
            st.pop(); 
        }

        reverse(ans.begin(), ans.end()); 

        return ans; 
    }
};