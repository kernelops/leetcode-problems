class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int sp=0; 
        for (int i=0; i<t.size(); i++){
            if (sp < s.size() && t[i] == s[sp]) sp++; 
        }    

        if (sp == s.size()) return true; 
        return false; 
    }
};