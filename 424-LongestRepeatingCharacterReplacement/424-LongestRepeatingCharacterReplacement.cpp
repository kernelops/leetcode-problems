// Last updated: 6/3/2026, 11:31:12 PM
class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int left=0, right=0; int windowSize=0, maxFreq=0; int ans=0; 
        map<char, int> mpp; 
        while (right < s.size()){
            char c = s[right]; 
            mpp[c]++; 
            windowSize++; 
            for (auto i: mpp){
                maxFreq = max(maxFreq, i.second); 
            }

            while ((windowSize-maxFreq) > k){
                mpp[s[left]]--; 
                left++;
                windowSize--;
                for (auto i: mpp){
                    maxFreq = max(maxFreq, i.second);
                }
            }
            ans = max(ans, windowSize); 
            right++; 
        }
        return ans;
    }
};