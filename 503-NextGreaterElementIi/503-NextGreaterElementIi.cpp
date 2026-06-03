// Last updated: 6/3/2026, 11:31:02 PM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        vector<int> newnums = nums;
        for (int i=0; i<nums.size(); i++)
            newnums.push_back(nums[i]);
        
        stack<int> s;
        vector<int> ng(newnums.size());
        for (int i=newnums.size()-1; i>=0; i--)
        {
            while (!s.empty() && s.top() <= newnums[i]) s.pop();
            if (s.empty()) ng[i] = -1;
            else ng[i] = s.top();
            s.push(newnums[i]);
        }    
        vector<int> ans;
        for (int i=0; i<nums.size(); i++)
            ans.push_back(ng[i]);
        return ans;

    }
};