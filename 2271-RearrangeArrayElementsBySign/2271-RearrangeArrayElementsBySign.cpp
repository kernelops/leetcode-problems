// Last updated: 6/3/2026, 11:29:22 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        vector<int> pos, neg; int n=nums.size();
        for (int i=0; i<nums.size(); i++){
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }    
        nums.clear();
        for (int i=0; i<n/2; i++){
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
        }
        return nums;
    }
};