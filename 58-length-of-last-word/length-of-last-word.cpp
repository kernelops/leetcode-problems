class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        vector<string> words; 
        int ptr=0; 
        while (ptr < s.size()){ 
            string word = ""; 
            if (s[ptr] != ' '){
                while (ptr < s.size() && s[ptr] != ' '){
                    word += s[ptr]; 
                    ptr++; 
                }
                words.push_back(word); 
            }
            ptr++; 
        }
        return words[words.size()-1].size(); 
    }
};