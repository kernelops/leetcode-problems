// Last updated: 7/9/2026, 11:53:13 PM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        priority_queue<pair<int, string>> pq; 

        for (int i=0; i<names.size(); i++) pq.push({heights[i], names[i]}); 

        vector<string> ans; 

        while (!pq.empty()){
            auto node = pq.top(); 
            pq.pop(); 
            ans.push_back(node.second); 
        } 

        return ans;     
    }
};