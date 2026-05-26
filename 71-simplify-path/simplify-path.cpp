class Solution {
public:
    string simplifyPath(string path) 
    {
        string token=""; 
        stack<string> st; 

        for (char c: path){
            if (c == '/'){
                if (!token.empty()){
                    if (token == "."){}
                    else if (token == ".."){
                        if (!st.empty()) st.pop(); 
                    }
                    else st.push(token); 

                    token.clear(); 
                }
            }
            else token += c; 
        }  

        if (!token.empty()){
            if (token == "."){}
            else if (token == ".."){
                if (!st.empty()) st.pop(); 
            }
            else st.push(token);            
        }  

        if (st.empty()) return "/";
        
        vector<string> dir; 
        while (!st.empty()){
            dir.push_back(st.top()); 
            st.pop(); 
        }
        reverse(dir.begin(), dir.end()); 

        string ans=""; 
        for (auto item: dir)
            ans += "/" + item; 

        return ans; 
    }
};