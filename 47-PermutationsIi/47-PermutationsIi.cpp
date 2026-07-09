// Last updated: 7/10/2026, 12:02:11 AM
class Solution {
public:
    void perm(vector<int> &nums, int idx, set<vector<int>> &ans){
        if (nums.size() == idx){
            ans.insert(nums); 
            return; 
        }

        for (int i=idx; i<nums.size(); i++){
            swap(nums[idx], nums[i]); 
            perm(nums, idx+1, ans); 
            swap(nums[idx], nums[i]); 
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) 
    {
        set<vector<int>> ans; 
        perm(nums, 0, ans); 

        vector<vector<int>> final_ans; 
        for (auto i: ans) final_ans.push_back(i); 

        return final_ans; 
    }
};