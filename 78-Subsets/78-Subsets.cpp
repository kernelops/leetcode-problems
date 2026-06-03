// Last updated: 6/3/2026, 11:33:42 PM
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> subset;
        ans.push_back({});
        sort(nums.begin(), nums.end());
        for (int i: nums)
        {
            int n = ans.size();
            for (int j=0; j<n; j++)
            {
                subset = ans[j];
                subset.push_back(i);
                ans.push_back(subset);
            }
        }    
        return ans;
    }
};