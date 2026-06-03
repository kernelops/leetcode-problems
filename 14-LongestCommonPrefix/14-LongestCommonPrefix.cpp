// Last updated: 6/3/2026, 11:34:49 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string first = strs[0]; string common="";
        for (int i=0; i<first.size(); i++)
        {
            char letter = first[i];
            for (int j=1; j<strs.size(); j++)
            {
                //string word = strs[j];
                if(strs[j][i] == letter)
                    continue;
                else
                    return common;
            }
            common.push_back(letter);
        }
        return common;
    }
};