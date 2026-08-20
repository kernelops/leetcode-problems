// Last updated: 8/21/2026, 12:14:55 AM
class Solution {
public:
    int maximumLengthSubstring(string s) 
    {
        int l=0, ans=0;
        unordered_map<char, int> mpp;  

        for (int r=0; r<s.size(); r++){
            mpp[s[r]]++; 
            while (mpp[s[r]] > 2){
                mpp[s[l]]--; 
                l++; 
            }
            ans = max(ans, r-l+1); 
        }    

        return ans; 
    }
};