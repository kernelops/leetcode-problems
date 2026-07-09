// Last updated: 7/10/2026, 12:02:12 AM
class Solution {
public:
    void perm(vector<int> &nums, int idx, vector<vector<int>> &ans){
        if (idx == nums.size()){
            ans.push_back(nums); 
            return; 
        }

        for (int i=idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]); 
            perm(nums, idx+1, ans); 
            swap(nums[idx], nums[i]); // backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans; 
        perm(nums, 0, ans); 

        return ans; 
    }
};