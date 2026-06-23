// Last updated: 6/23/2026, 10:25:11 PM
1class Solution {
2public:
3    void perm(vector<int> &nums, int idx, vector<vector<int>> &ans){
4        if (idx == nums.size()){
5            ans.push_back(nums); 
6            return; 
7        }
8
9        for (int i=idx; i<nums.size(); i++){
10            swap(nums[idx], nums[i]); 
11            perm(nums, idx+1, ans); 
12            swap(nums[idx], nums[i]); // backtrack
13        }
14    }
15    vector<vector<int>> permute(vector<int>& nums) 
16    {
17        vector<vector<int>> ans; 
18        perm(nums, 0, ans); 
19
20        return ans; 
21    }
22};