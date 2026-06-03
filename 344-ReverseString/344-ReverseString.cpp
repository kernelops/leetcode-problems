// Last updated: 6/3/2026, 11:31:24 PM
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int l=0, r=s.size()-1; 
        while (l<r){
            char temp = s[l]; 
            s[l] = s[r]; 
            s[r] = temp; 
            l++; 
            r--; 
        }
    }
};