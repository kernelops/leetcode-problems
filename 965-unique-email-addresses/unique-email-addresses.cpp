class Solution {
public: 
    int numUniqueEmails(vector<string>& emails) 
    {
        map<string, int> mpp;
        for (string s: emails){
            string temp=""; bool at = false, plus = false; 
            for (char c: s){
                if (at == false && c == '.') continue;
                else if (at == true && c == '.') temp += c; 
                else if (c == '+'){
                    plus = true; 
                    continue;   
                }
                else if (at == false && plus == false && isalnum(c)) temp += c; 
                else if (plus == false && isalnum(c)) temp += c; 
                else if (at == true) temp+=c;  
                else if (c == '@') {temp += c; at = true; }
            }
            cout << temp; 
            mpp[temp]++; 
        }    
        return mpp.size(); 
    }
};