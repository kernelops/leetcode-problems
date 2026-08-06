// Last updated: 8/6/2026, 10:48:49 PM
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) 
4    {
5        unordered_map<int, vector<int>> mpp; 
6        for (int i=0; i<nums.size(); i++){
7            mpp[nums[i]].push_back(i); 
8        }    
9
10        for (auto i : mpp) {
11            vector<int> arr = i.second;
12            for (int j = 1; j < arr.size(); j++) {
13                if (arr[j] - arr[j - 1] <= k)
14                    return true;
15            }
16        }
17
18        return false; 
19    }
20};