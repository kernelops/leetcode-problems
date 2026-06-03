// Last updated: 6/3/2026, 11:31:44 PM
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) 
    {
        int left=0, right=k-1; 
        map<int, int> mpp; 

        for (int i=0; i<k; i++)
            mpp[nums[i]]++; 

        vector<int> ans;
        while (right < nums.size()){
            auto node = mpp.rbegin(); 
            ans.push_back(node->first); 
            mpp[nums[left]]--; 
            if (mpp[nums[left]] == 0) mpp.erase(nums[left]);
            left++;
            right++;
            if (right < nums.size()) mpp[nums[right]]++;
        }    

        return ans;
    }
};