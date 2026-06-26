// Last updated: 6/26/2026, 7:13:37 PM
class Solution {
public:
    int minChanges(string s) 
    {
        // count number of adjacent differnt elements
        int count=0; 
        for (int i=0; i<s.size()-1; i += 2)
            if (s[i] != s[i+1]) count++; 

        return count;     
    }
};