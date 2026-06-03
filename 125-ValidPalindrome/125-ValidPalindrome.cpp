// Last updated: 6/3/2026, 11:33:09 PM
class Solution {
public:
    bool isPalindrome(string s) 
    {
        string processed=""; 
        for (int i=0; i<s.size(); i++){
            char c = s[i]; 
            if (isalnum(c))
                processed += tolower(c);
        }    

        string rev="";
        for (int i=processed.size()-1; i>=0; i--)
            rev += processed[i]; 

        return rev == processed;
    }
};