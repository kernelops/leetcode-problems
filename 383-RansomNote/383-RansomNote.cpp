// Last updated: 6/3/2026, 11:31:17 PM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        map<char, int> ran, mag;
        for (int i=0; i<ransomNote.size(); i++)
            ran[ransomNote[i]]++;
        for (int i=0; i<magazine.size(); i++)
            mag[magazine[i]]++;
        for (const auto& entry : ran) 
        {
            char ch = entry.first;
            int count = entry.second;
            if (mag[ch] < count)  
                return false;
        }
        return true;
    }
};