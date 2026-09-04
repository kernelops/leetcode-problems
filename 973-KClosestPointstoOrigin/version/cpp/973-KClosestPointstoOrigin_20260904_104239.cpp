// Last updated: 9/4/2026, 10:42:39 AM
1class Solution {
2public:
3    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
4        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<pair<double, vector<int>>>> pq; 
5
6        for (auto i: points) {
7            double d = sqrt(i[0]*i[0] + i[1]*i[1]); 
8            pq.push({d, i}); 
9        }
10
11        vector<vector<int>> ans; 
12        for (int i=0; i<k; i++) {
13            auto node = pq.top(); 
14            pq.pop(); 
15
16            ans.push_back(node.second); 
17        }
18
19        return ans; 
20    }
21};