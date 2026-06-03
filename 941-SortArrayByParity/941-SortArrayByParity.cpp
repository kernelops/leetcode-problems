// Last updated: 6/3/2026, 11:30:16 PM
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        if (nums.size() == 1) return nums; 

        vector<int> even; vector<int> odd; 
        for (int i: nums){
            if (i%2 == 0) even.push_back(i);
            else odd.push_back(i); 
        }    

        vector<int> ans; 
        for (int i: even) ans.push_back(i); 
        for (int i: odd) ans.push_back(i); 

        return ans; 
    }
};