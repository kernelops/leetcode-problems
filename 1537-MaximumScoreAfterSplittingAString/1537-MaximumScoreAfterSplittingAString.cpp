// Last updated: 7/9/2026, 11:56:57 PM
class Solution {
public:
    int maxScore(string s) 
    {
        int zero=0, one=0; 
        for (char c: s){
            if (c == '0') zero++; 
            else one++; 
        }    

        int ptr=0, ans=0, left=0, right=one; 
        while (ptr < s.size()-1){
            if (s[ptr] == '0'){
                left++; 
            }
            else if (s[ptr] == '1'){
                right--; 
            }
            ans = max(ans, left+right); 
            ptr++; 
        }

        return ans; 
    }
};