// Last updated: 6/3/2026, 11:30:59 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        map<int, int> count;
        for (int i=0; i<nums.size(); i++)
            count[nums[i]]++;
        for (const auto& i: count)
        {
            if (i.second != 2)
                return i.first;
        }
        return -1;
    }
};