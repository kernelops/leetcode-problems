// Last updated: 7/9/2026, 11:55:39 PM
class Solution {
public:
    bool isCircularSentence(string sentence) 
    {
        vector<string> words; string word="";
        for (char c: sentence){
            if (c == ' '){
                words.push_back(word); 
                word = ""; 
            }
            else word += c; 
        }    
        words.push_back(word); 

        if (words.size() == 1){
            if (words[0][0] == words[0][words[0].size()-1]) return true; 
            else return false; 
        } 

        for (int i=1; i<words.size(); i++)
            if (words[i][0] != words[i-1][words[i-1].size()-1]) return false; 

        if (words[0][0] != words[words.size()-1][words[words.size()-1].size()-1])       return false; 
        
        return true; 
    }
};