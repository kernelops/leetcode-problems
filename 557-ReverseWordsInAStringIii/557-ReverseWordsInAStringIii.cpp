// Last updated: 7/9/2026, 11:58:47 PM
class Solution {
public:
    string reverseWords(string s) 
    {
        string ans=""; int i=0;
        while (i < s.size()){
            string word=""; 
            while (i < s.size() && !isspace(s[i])) {
                word += s[i++];
            }

            reverse(word.begin(), word.end()); 
            ans += word;

            while (i < s.size() && isspace(s[i])) {
                ans += s[i++];
            } 
        }    

        return ans; 
    }
};