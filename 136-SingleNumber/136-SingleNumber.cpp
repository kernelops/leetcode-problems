// Last updated: 6/3/2026, 11:33:01 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = 0; 
        for (int i: nums)
            res = res ^ i; 
        return res; 
    }
};