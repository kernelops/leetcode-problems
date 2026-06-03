// Last updated: 6/3/2026, 11:32:32 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        map <int, int> maj;
        for (int i: nums)
            maj[i]++;

        for (auto i: maj)
            if (i.second > nums.size()/2)
                return i.first;
        return -1;
    }
};