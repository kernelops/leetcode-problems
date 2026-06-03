// Last updated: 6/3/2026, 11:29:40 PM
class Solution {
public:
    int minOperations(vector<string>& logs) 
    {
        stack<char> st; 
        for (string s: logs){
            if (s == "../"){
                if(!st.empty()) st.pop(); 
            }
            else if (s == "./") continue; 
            else st.push('x'); 
        }    

        return st.size(); 
    }
};