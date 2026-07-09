// Last updated: 7/9/2026, 11:57:34 PM
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        unordered_map<char, int> mpp; 

        for (char c: chars) mpp[c]++; 

        int ans=0; 
        for (string word: words){
            int count=0; 
            unordered_map<char, int> temp = mpp; 
            if (word.size() > chars.size()) continue; 
            for (char c: word){
                if (temp.find(c) != temp.end()){
                    temp[c]--; 
                    if (temp[c] == 0) temp.erase(c); 
                    count++; 
                } 
            }

            if (count == word.size()) ans += count; 
        }    

        return ans; 
    }
};