// Last updated: 7/9/2026, 11:56:51 PM
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) 
    {
        unordered_map<int, int> mpp1; 

        for (int i: target) mpp1[i]++; 
        for (int i: arr) mpp1[i]--; 

        for (auto i: mpp1)
            if (i.second>0) return false;  
        return true;  
    }
};