// Last updated: 6/26/2026, 1:35:16 PM
class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int size = s.size(); 
        int countOne=0; 
        for (char c: s) if (c == '1') countOne++; 

        string ans=""; int temp = countOne; 
        while (countOne > 1){
            ans += '1'; 
            countOne--; 
        }

        for (int i=0; i<size-temp; i++){
            ans += '0'; 
        }
        ans += '1'; 

        return ans; 
    }
};