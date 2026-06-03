// Last updated: 6/3/2026, 11:31:04 PM
#include <stack>
#include <vector>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> ng(nums2.size()); stack<int> s;
        for (int i=nums2.size()-1; i>=0; i--)
        {
            while (!s.empty() && s.top() < nums2[i]) s.pop();
            if (s.empty()) ng[i] = -1;
            else ng[i] = s.top();
            s.push(nums2[i]);
        }      
        vector<int> ans; 
        unordered_map<int, int> mp;
        for (int i = 0; i < nums2.size(); i++) {
            mp[nums2[i]] = ng[i];
        }

        for (int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};