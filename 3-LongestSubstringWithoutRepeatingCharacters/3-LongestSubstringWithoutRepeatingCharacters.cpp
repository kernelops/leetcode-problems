// Last updated: 6/3/2026, 11:35:04 PM
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l=0, r=0; unordered_map<char, int> map; int maxi=0;
        while (r<s.size())
        {
            if (map.find(s[r]) == map.end())
            {
                map[s[r]] = r;
                maxi = max(maxi, r - l + 1);  
                r++;
            }
            else
            {
                map.erase(s[l]);   
                l++;              
            }
        }
        return maxi;
    }
};