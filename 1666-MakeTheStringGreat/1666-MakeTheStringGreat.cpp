// Last updated: 6/3/2026, 11:29:41 PM
class Solution {
public:
    string makeGood(string s) 
    {
        stack<char> st; 
        for (char c: s){
            if (st.empty()){
                st.push(c); continue; 
            }

            if (islower(c)){
                if (isupper(st.top())){
                    if (tolower(st.top()) == c){
                        st.pop(); continue; 
                    }
                }
            }

            else if (isupper(c)){
                if (islower(st.top())){
                    if (toupper(st.top()) == c){
                        st.pop(); continue; 
                    }
                }
            }

            st.push(c); 
        }    

        string ans=""; 
        while (!st.empty()){ ans += st.top(); st.pop();}

        reverse(ans.begin(), ans.end()); 
        
        return ans; 
    }
};