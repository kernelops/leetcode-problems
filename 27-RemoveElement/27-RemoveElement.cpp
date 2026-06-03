// Last updated: 6/3/2026, 11:34:30 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> vec;
        for (int i: nums)
        {
            if (i!=val)
                vec.push_back(i);
        }
        for (int i=0; i<vec.size(); i++)
            nums[i] = vec[i];
        return vec.size();
    }
};