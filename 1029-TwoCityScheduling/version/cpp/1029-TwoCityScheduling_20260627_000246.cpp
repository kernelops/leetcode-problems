// Last updated: 6/27/2026, 12:02:46 AM
1class Solution {
2public:
3    int twoCitySchedCost(vector<vector<int>>& costs) 
4    {
5        vector<vector<int>> diff; 
6        for (int i=0; i<costs.size(); i++)
7            diff.push_back({costs[i][1] - costs[i][0], i}); 
8        
9        sort(diff.begin(), diff.end()); 
10
11        int ans=0; int a = costs.size()/2; 
12        for (int i=0; i<diff.size(); i++){
13            if (i<a) ans += costs[diff[i][1]][1]; 
14            else ans += costs[diff[i][1]][0]; 
15        }
16
17        return ans; 
18    }
19};