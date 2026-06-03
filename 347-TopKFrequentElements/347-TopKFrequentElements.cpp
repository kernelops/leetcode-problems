// Last updated: 6/3/2026, 11:31:21 PM
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        map<int, int> mpp; 
        for (int i: nums)
            mpp[i]++; 
        
        priority_queue<pair<int, int>> pq;

        for (auto i: mpp){
            pq.push({i.second, i.first});
        }

        int count=0; vector<int> ans;
        while(count < k){
            auto node = pq.top(); 
            pq.pop(); 
            count++; 
            ans.push_back(node.second); 
        }

        return ans;
    }
};