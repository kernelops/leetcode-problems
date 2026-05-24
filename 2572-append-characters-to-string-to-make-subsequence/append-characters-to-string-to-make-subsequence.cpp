class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int tp=0; 
        for (int i=0; i<s.size(); i++){
            if (s[i] == t[tp]) tp++; 
        }    

        int append = t.size() - tp; 

        return append; 
    }
};