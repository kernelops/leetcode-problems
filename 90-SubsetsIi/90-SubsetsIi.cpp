// Last updated: 6/3/2026, 11:33:33 PM
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> subset;
        ans.push_back({});
        set<vector<int>> s;
        s.insert({});
        sort(nums.begin(), nums.end());
        for (int i: nums)
        {
            int n = ans.size();
            for (int j=0; j<n; j++)
            {
                subset = ans[j]; 
                subset.push_back(i);
                if (s.find(subset) == s.end())
                {
                    ans.push_back(subset);
                    s.insert(subset);
                }
            }
        } 
        return ans;   
    }
};