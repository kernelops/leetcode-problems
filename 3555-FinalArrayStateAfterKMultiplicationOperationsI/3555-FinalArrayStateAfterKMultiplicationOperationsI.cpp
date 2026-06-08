// Last updated: 6/9/2026, 12:18:50 AM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) 
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
        for (int i=0; i<nums.size(); i++) pq.push({nums[i], i}); 

        for (int i=0; i<k; i++){
            auto val = pq.top(); 
            pq.pop(); 
            pq.push({val.first*multiplier, val.second}); 
        }    

        vector<int> ans(nums.size());
        while (!pq.empty()){
            auto val = pq.top(); 
            pq.pop(); 
            ans[val.second] = val.first; 
        } 

        return ans; 
    }
};