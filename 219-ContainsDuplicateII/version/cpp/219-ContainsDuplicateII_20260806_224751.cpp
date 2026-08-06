// Last updated: 8/6/2026, 10:47:51 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) 
4    {
5        unordered_map<int, vector<int>> mpp; 
6        for (int i=0; i<nums.size(); i++){
7            mpp[nums[i]].push_back(i); 
8        }    
9
10        for (auto &p : mpp) {
11            vector<int> &idx = p.second;
12            for (int i = 1; i < idx.size(); i++) {
13                if (idx[i] - idx[i - 1] <= k)
14                    return true;
15            }
16        }
17
18        return false; 
19    }
20};