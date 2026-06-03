// Last updated: 6/3/2026, 11:30:46 PM
class Solution {
public:
    bool checkValidString(string s) {
        stack<int> paren; 
        stack<int> star; 

        for (int i=0; i<s.size(); i++){
            if (s[i] == '(') paren.push(i);
            if (s[i] == '*') star.push(i); 

            if (s[i] == ')'){
                if (paren.size()>0){
                    paren.pop(); 
                }
                else if (star.size()>0){
                    star.pop();
                }
                else return false;
            }
        }

        while (!paren.empty() && !star.empty()) {
            int openIdx = paren.top();
            int starIdx = star.top();
            if (starIdx < openIdx) return false;
            paren.pop();
            star.pop();
        }

        if (paren.size()>0) return false; 
        return true; 
    }
};