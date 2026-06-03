// Last updated: 6/3/2026, 11:30:05 PM
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        priority_queue <pair<int, vector<int>>, vector<pair<int, vector<int>>>, greater<pair<int, vector<int>>>> pq;

        for (auto i: points){
            int d = (i[0]*i[0]) + (i[1]*i[1]);
            pq.push({d, i}); 
        }    

        vector<vector<int>> ans;
        for (int i=0; i<k; i++){
            auto n = pq.top(); pq.pop(); 
            ans.push_back(n.second); 
        }

        return ans; 
    }
};