// Last updated: 6/12/2026, 12:18:49 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> ans; 
        for (int i: nums) ans.push_back(i*i); 

        sort(ans.begin(), ans.end()); 
        return ans;    
    }
};