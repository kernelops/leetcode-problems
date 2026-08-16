// Last updated: 8/16/2026, 8:12:46 AM
1class Solution {
2public:
3    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) 
4    {
5        int ans=INT_MAX, minDist=INT_MAX; int idx=0;  
6        for (auto i: drones){
7            int dist = abs(i[0] - target[0]) + abs(i[1] - target[1]); 
8            if (dist <= i[2] && dist < minDist) {
9                minDist = dist; 
10                ans = idx; 
11            }
12            idx++; 
13        } 
14
15        return ans != INT_MAX ? ans : -1; 
16    }
17};