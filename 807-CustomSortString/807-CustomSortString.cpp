// Last updated: 6/3/2026, 11:30:29 PM
class Solution {
public:
    string customSortString(string order, string s) 
    {
        map<char, int> mpp; 
        for (char c: s) mpp[c]++; 

        string ans=""; 
        for (char c: order){
            int count = mpp[c]; 
            for (int i=0; i<count; i++){
                ans += c; 
                mpp[c]--; 
            }
            mpp.erase(c); 
        }    

        if (!mpp.empty()){
            for (auto i: mpp){ 
                for (int j=0; j<i.second; j++){
                    ans += i.first; 
                    mpp[i.second]--; 
                }
                mpp.erase(i.first); 
            }
        }

        return ans; 
    }
};