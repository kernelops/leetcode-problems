// Last updated: 6/3/2026, 11:31:15 PM
class Solution {
public:
    int firstUniqChar(string s) 
    {
        unordered_map<char, int> count;

        for (int i = 0; i < s.size(); i++)
        {
            count[s[i]]++;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (count[s[i]] == 1)
                return i;
        }

        return -1;
    }
};