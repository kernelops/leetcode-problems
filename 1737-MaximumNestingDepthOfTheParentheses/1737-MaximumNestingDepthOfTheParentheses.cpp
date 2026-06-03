// Last updated: 6/3/2026, 11:29:39 PM
class Solution {
public:
    int maxDepth(string s) 
    {
        int count=0; int maxi=0;
        for (int i=0; i<s.size(); i++){
            if (s[i] == '(')
            {
                count++; 
                maxi = max(maxi, count);
            }
            if (s[i] == ')') count--;
        }    
        return maxi;
    }
};