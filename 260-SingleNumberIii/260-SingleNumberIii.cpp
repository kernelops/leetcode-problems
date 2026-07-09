// Last updated: 7/9/2026, 11:59:30 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        int num=0; 
        for (int i: nums) num = num^i; 

        unsigned int mask = (unsigned int) num & (-(unsigned int)num);
        int rightmostSetBit = (int)mask; 
        vector<int> b1, b2; 
        for (int i: nums){
            if (i & rightmostSetBit)
                b1.push_back(i); 
            else b2.push_back(i); 
        }

        vector<int> ans; int n=0; 
        for (int i: b1) n = n^i; 
        ans.push_back(n); n=0; 
        for (int i: b2) n = n^i; 
        ans.push_back(n); 

        return ans; 
    }
};