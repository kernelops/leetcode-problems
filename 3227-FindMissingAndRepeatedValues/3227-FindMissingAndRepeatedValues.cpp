// Last updated: 7/9/2026, 11:52:48 PM
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n = grid.size(); 
        vector<bool> nums(n * n + 1, false);
        nums[0] = true;

        unordered_map<int, int> mpp;

        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[i].size(); j++){
                mpp[grid[i][j]]++; 
                nums[grid[i][j]] = true; 
            }
        }      

        vector<int> ans; 
        for (int i=1; i<nums.size(); i++){
            if (!nums[i]){
                ans.push_back(i);
                break;
            }
        }

        for (auto i: mpp)
            if (i.second == 2) ans.push_back(i.first);  

        reverse(ans.begin(), ans.end()); 

        return ans; 
    }
};