// Last updated: 7/9/2026, 11:59:08 PM
class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        unordered_map<char, int> mpp; 

        for (char c: t) mpp[c]++; 
        for (char c: s){
            mpp[c]--; 
            if (mpp[c] == 0) mpp.erase(c); 
        }

        for (auto i: mpp) return i.first; 

        return '\0'; 
    }
};