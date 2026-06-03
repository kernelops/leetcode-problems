// Last updated: 6/3/2026, 11:29:46 PM
class Solution {
public:
    int numberOfSubstrings(string s) 
    {
        vector<int> freq(3, 0); 
        int right=0, left=0, count=0; 
        while (left <= right && left < s.size() && right < s.size()){
            if (s[right] == 'a') freq[0]++; 
            else if (s[right] == 'b') freq[1]++; 
            else freq[2]++; 

            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0){
                count += s.size() - right; 
                if (s[left] == 'a') freq[0]--; 
                else if (s[left] == 'b') freq[1]--; 
                else freq[2]--; 
                left++; 
            }

            right++; 
        } 

        return count;    
    }
};