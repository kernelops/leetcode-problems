// Last updated: 6/3/2026, 11:32:31 PM
class Solution {
public:
    int titleToNumber(string columnTitle) 
    {
        int res = 0;
        for (int i=0; i<columnTitle.size(); i++)
        {
            res = res * 26;
            res = res + (columnTitle[i]+1-'A');
        }    
        return res;
    }
};