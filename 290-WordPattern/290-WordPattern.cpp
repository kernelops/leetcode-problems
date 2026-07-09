// Last updated: 7/9/2026, 11:59:26 PM
class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<char, string> mpp; 
        unordered_map<string, char> rev; 

        vector<string> words; 
        string word = ""; 
        for (char c: s){
            if (c == ' '){
                words.push_back(word); 
                word=""; 
            }
            else word += c; 
        }    
        words.push_back(word); 

        if (pattern.size() != words.size()) return false; 

        for (int i=0; i<pattern.size(); i++){
            if (mpp.find(pattern[i]) == mpp.end()){
                if (rev.find(words[i]) != rev.end()) return false;
                mpp[pattern[i]] = words[i]; 
                rev[words[i]] = pattern[i];
            }
            else{
                if (mpp[pattern[i]] != words[i]) return false; 
                if (rev[words[i]] != pattern[i]) return false; 
            } 
        }

        return true; 
    }
};