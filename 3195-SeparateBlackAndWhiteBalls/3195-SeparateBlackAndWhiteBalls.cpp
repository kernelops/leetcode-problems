// Last updated: 6/26/2026, 1:35:15 PM
class Solution {
public:
    long long minimumSteps(string s) 
    {
        int countZero = 0; 
        for (char c: s){
            if (c == '0') countZero++; 
        }   

        string req=""; 
        for (int i=0; i<countZero; i++) req += '0'; 
        for (int i=0; i<s.size()-countZero; i++) req += '1'; 

        vector<int> pos1, pos2; 
        for (int i=0; i<s.size(); i++)
            if (s[i] == '1') pos1.push_back(i); 
        
        for (int i=0; i<req.size(); i++)
            if (req[i] == '1') pos2.push_back(i); 

        long long ans=0; 
        for (int i=0; i<pos1.size(); i++)
            ans += (pos2[i] - pos1[i]); 
        
        return ans; 
    }
};