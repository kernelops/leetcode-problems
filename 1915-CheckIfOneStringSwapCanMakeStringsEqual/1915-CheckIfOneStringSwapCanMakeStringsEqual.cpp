// Last updated: 6/26/2026, 1:35:39 PM
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        if (s1.size() != s2.size()) return false;
        unordered_map<char, int> mpp1; 
        unordered_map<char, int> mpp2; 

        for (char c: s1) mpp1[c]++;
        for (char c: s2) mpp2[c]++; 

        if (mpp1 != mpp2) return false; 
          
        int mismatch=0; 
        for (int i=0; i<s1.size(); i++){
            if (s1[i] != s2[i]) mismatch++; 
        }

        if (mismatch == 2 || mismatch == 0) return true; 
        return false; 
    }
};