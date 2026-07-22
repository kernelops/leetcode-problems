// Last updated: 7/23/2026, 12:21:18 AM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) 
4    {
5        sort(intervals.begin(), intervals.end()); 
6
7        int start = intervals[0][0]; 
8        int end = intervals[0][1]; 
9        vector<vector<int>> ans; 
10
11        for (int i=1; i<intervals.size(); i++){
12            if (intervals[i][0] <= end)
13                end = max(end, intervals[i][1]); 
14            else{
15                ans.push_back({start, end}); 
16                start = intervals[i][0]; 
17                end = intervals[i][1]; 
18            }
19        }    
20        ans.push_back({start, end}); 
21
22        return ans; 
23    }
24};