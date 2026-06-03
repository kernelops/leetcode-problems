// Last updated: 6/3/2026, 11:32:16 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        if (s.size() != t.size()) return false; 
        vector<int> sc(256, -1); 
        vector<int> tc(256, -1); 

        for (int i=0; i<s.size(); i++){
            if (sc[s[i]] != tc[t[i]]) return false; 

            sc[s[i]] = i; 
            tc[t[i]] = i; 
        }    

        return true; 
    }
};