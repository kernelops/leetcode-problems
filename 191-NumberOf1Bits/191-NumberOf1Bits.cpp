// Last updated: 6/3/2026, 11:32:27 PM
class Solution {
public:
    string toBinary(int n){
        string res=""; 
        while (n>0){
            if (n%2 == 1) res += '1'; 
            else res += '0'; 
            n = n/2; 
        }

        reverse(res.begin(), res.end()); 
        return res; 
    }
    int hammingWeight(int n) 
    {
        string ans = toBinary(n); 
        int count=0; 
        for (char c: ans)
            if (c == '1') count++; 
        
        return count; 
    }
};