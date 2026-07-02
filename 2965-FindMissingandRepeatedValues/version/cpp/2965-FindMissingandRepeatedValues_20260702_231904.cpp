// Last updated: 7/2/2026, 11:19:04 PM
1class Solution {
2public:
3    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
4    {
5        int n = grid.size(); 
6        vector<bool> nums(n * n + 1, false);
7        nums[0] = true;
8
9        unordered_map<int, int> mpp;
10
11        for (int i=0; i<grid.size(); i++){
12            for (int j=0; j<grid[i].size(); j++){
13                mpp[grid[i][j]]++; 
14                nums[grid[i][j]] = true; 
15            }
16        }      
17
18        vector<int> ans; 
19        for (int i=1; i<nums.size(); i++){
20            if (!nums[i]){
21                ans.push_back(i);
22                break;
23            }
24        }
25
26        for (auto i: mpp)
27            if (i.second == 2) ans.push_back(i.first);  
28
29        reverse(ans.begin(), ans.end()); 
30
31        return ans; 
32    }
33};