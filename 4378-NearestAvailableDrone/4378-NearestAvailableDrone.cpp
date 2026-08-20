// Last updated: 8/21/2026, 12:14:12 AM
class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) 
    {
        int ans=INT_MAX, minDist=INT_MAX; int idx=0;  
        for (auto i: drones){
            int dist = abs(i[0] - target[0]) + abs(i[1] - target[1]); 
            if (dist <= i[2] && dist < minDist) {
                minDist = dist; 
                ans = idx; 
            }
            idx++; 
        } 

        return ans != INT_MAX ? ans : -1; 
    }
};