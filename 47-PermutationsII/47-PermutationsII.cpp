// Last updated: 6/23/2026, 10:31:09 PM
1class Solution {
2public:
3    void perm(vector<int> &nums, int idx, set<vector<int>> &ans){
4        if (nums.size() == idx){
5            ans.insert(nums); 
6            return; 
7        }
8
9        for (int i=idx; i<nums.size(); i++){
10            swap(nums[idx], nums[i]); 
11            perm(nums, idx+1, ans); 
12            swap(nums[idx], nums[i]); 
13        }
14    }
15    vector<vector<int>> permuteUnique(vector<int>& nums) 
16    {
17        set<vector<int>> ans; 
18        perm(nums, 0, ans); 
19
20        vector<vector<int>> final_ans; 
21        for (auto i: ans) final_ans.push_back(i); 
22
23        return final_ans; 
24    }
25};