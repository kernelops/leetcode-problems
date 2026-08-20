// Last updated: 8/21/2026, 12:27:08 AM
class Solution {
public:
    string minWindow(string s, string t) 
    {
        if (t.size() > s.size()) return "";  

        vector<int> freq(128, 0);
        for (char c: t) freq[c]++; 

        int l=0, r=0; 
        int count = t.size(); 
        string ans=""; int minLen=INT_MAX; 
        int start=0;

        while (r<s.size()){
            if  (freq[s[r]] > 0){
                count--;  
            }
            freq[s[r]]--; 

            while (count == 0){
                if ((r-l+1) < minLen){
                    minLen = r-l+1; 
                    //ans = s.substr(l, minLen); reason for resulting in Memory Limit Exceeded
                    start=l;
                }

                freq[s[l]]++; 

                if (freq[s[l]] > 0) count++; 
                l++; 
            }
            r++; 
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};