// Last updated: 6/3/2026, 11:29:19 PM
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        map<int, int> count;
        for (int i=0; i<nums.size(); i++)
        {
            for (int j=0; j<nums[i].size(); j++)
                count[nums[i][j]]++;
        }
        vector<int> num;
        for (auto &[key, value] : count)
        {
            if (value == nums.size())
                num.push_back(key);
        } 
        return num;   
    }
};