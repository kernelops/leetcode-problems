// Last updated: 6/3/2026, 11:30:53 PM
class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        map<char, int> mpp1; 
        for (int i=0; i<s1.size(); i++)
            mpp1[s1[i]]++;

        int window = s1.size(); 
        int l=0, r = window-1; 
        while (r<s2.size()){
            map<char, int> mpp2; 
            for (int i=l; i<=r; i++){
                mpp2[s2[i]]++;
            }

            int count=0; 
            for (char c: s1){
                if (mpp1[c] == mpp2[c])
                    count++; 
            }   
            if (count == window) return true; 
            l++; r++; 
        }     

        return false;
    }
};