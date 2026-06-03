// Last updated: 6/3/2026, 11:31:46 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int prod=1;
        vector<int> zero;
        for (int i=0; i<nums.size(); i++){
            if (nums[i] == 0){
                zero.push_back(i);
                continue; 
            }
            prod *= nums[i];
        }

        if (zero.size() > 1) {
            vector<int> ans(nums.size(), 0); 
            return ans;
        }

        int z=0;
        vector<int> ans;
        if (zero.size() == 1) 
        { 
            z = zero[0];
            for (int i=0; i<nums.size(); i++){
                if (i!=z){
                    ans.push_back(0);
                    continue;
                }
                ans.push_back(prod);
            } 
            return ans;
        }
        for (int i=0; i<nums.size(); i++)
            ans.push_back(prod/nums[i]); 

        return ans;    
    }
};