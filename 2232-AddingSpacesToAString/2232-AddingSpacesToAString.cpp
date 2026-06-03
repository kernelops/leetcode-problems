// Last updated: 6/3/2026, 11:29:25 PM
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) 
    {
        string ans=""; ans.reserve(s.size() + spaces.size());
        int space_size = spaces.size(); int space=0; int count=0; 
        for (int i=0; i<s.size(); i++){
            if (count < space_size) space = spaces[count]; 
            if (i != space) ans.push_back(s[i]); 
            if (i == space){
                ans.push_back(' '); 
                ans.push_back(s[i]);
                count++; 
            }
        }    

        return ans; 
    }
};