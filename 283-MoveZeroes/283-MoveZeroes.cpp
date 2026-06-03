// Last updated: 6/3/2026, 11:31:30 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        vector<int> num;
        for  (int i=0; i<nums.size(); i++) 
            if (nums[i] != 0)
                num.push_back(nums[i]);
        int zero = nums.size() - num.size();
        if (zero > 0)
            for (int i=0; i<zero; i++)
                num.push_back(0);
        nums.clear();
        for (int i=0; i<num.size(); i++)
            nums.push_back(num[i]);         
    }
};