// Last updated: 7/9/2026, 11:56:29 PM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int ans=0; 
        for (string word: words){
            int count=0; 
            for (char c: word){
                if (allowed.find(c) != string::npos) count++; 
            }
            if (count == word.size()) ans++; 
        } 

        return ans;        
    }
};