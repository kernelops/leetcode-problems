// Last updated: 7/9/2026, 11:56:44 PM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        int l=0, r=n; 
        vector<int> ans; 
        while (l < n){
            ans.push_back(nums[l++]); 
            ans.push_back(nums[r++]); 
        }    

        return ans; 
    }
};