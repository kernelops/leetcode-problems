class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if (s.size() != t.size()) return false; 
        map<char, char> mpp; 
        for (int i=0; i<s.size(); i++){
            char c = s[i]; 
            if (mpp.find(c) != mpp.end()){
                if (mpp[c] != t[i]) return false; 
            }
            else mpp[c] = t[i]; 
        }    

        map<char, char> mpp2; 
        for (int i=0; i<t.size(); i++){
            char c = t[i]; 
            if (mpp2.find(c) != mpp2.end()){
                if (mpp2[c] != s[i]) return false; 
            }
            else mpp2[c] = s[i]; 
        } 

        return true; 
    }
};