// Last updated: 7/9/2026, 11:57:35 PM
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        vector<vector<int>> diff; 
        for (int i=0; i<costs.size(); i++)
            diff.push_back({costs[i][1] - costs[i][0], i}); 
        
        sort(diff.begin(), diff.end()); 

        int ans=0; int a = costs.size()/2; 
        for (int i=0; i<diff.size(); i++){
            if (i<a) ans += costs[diff[i][1]][1]; 
            else ans += costs[diff[i][1]][0]; 
        }

        return ans; 
    }
};