// Last updated: 6/3/2026, 11:35:14 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int, int> mpp;

        for (int i=0; i<nums.size(); i++){
            int left = target - nums[i]; 

            if (mpp.find(left) != mpp.end())
                return {mpp[left], i}; 
            
            mpp[nums[i]] = i; 
        }    

        return {}; 
    }
};