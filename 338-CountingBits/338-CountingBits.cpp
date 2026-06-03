// Last updated: 6/3/2026, 11:31:25 PM
class Solution {
public:
    int toBinary(int n){
        string ans=""; 
        while (n>0){
            if (n%2 != 0) ans += '1'; 
            else ans += '0'; 
            n = n/2; 
        }

        int count=0; 
        for (char c: ans) if (c == '1') count++; 
        return count; 
    }
    vector<int> countBits(int n) 
    {
        vector<int> ans; 
        for (int i=0; i<=n; i++){
            ans.push_back(toBinary(i));
        }

        return ans; 
    }
};