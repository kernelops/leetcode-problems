// Last updated: 6/3/2026, 11:34:32 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        map<int, int> count;
        for (int i=0; i<nums.size(); i++)
            count[nums[i]]++;
        nums.clear();
        for (auto  &[key, value] : count)
            nums.push_back(key);
        return nums.size();
    }
};