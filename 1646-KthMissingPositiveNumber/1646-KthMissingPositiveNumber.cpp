// Last updated: 6/3/2026, 11:29:44 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        vector<int> nums;
        for (int i=1; nums.size() < k; i++)
        {
            auto n = find(arr.begin(), arr.end(), i);
            if (n != arr.end()) continue;
            else nums.push_back(i); 
        }    
        return nums[nums.size()-1];
    }
};