// Last updated: 7/9/2026, 11:59:02 PM
class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int n=0, i=0; string ans=""; int count=1; 
        for (i=1; i<chars.size(); i++){
            if (chars[i] == chars[i-1])
                count++; 
            else{
                ans += chars[i-1]; 
                if (count>1) ans += to_string(count); 
                count=1; 
            }
        }
        ans += chars.back(); 
        if (count>1) ans += to_string(count);

        // copying ans back to chars
        for (int i = 0; i < ans.size(); i++)
            chars[i] = ans[i];

        return ans.size(); 
    }
};