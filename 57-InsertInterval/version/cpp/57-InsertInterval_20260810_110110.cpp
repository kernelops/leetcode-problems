// Last updated: 8/10/2026, 11:01:10 AM
1class Solution {
2public:
3    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
4    {
5        int i = 0; 
6        vector<vector<int>> ans; 
7        // left non overlapping
8        while (i < intervals.size() && intervals[i][1] < newInterval[0])  
9            ans.push_back(intervals[i++]); 
10        
11        // overlapping
12        int left = newInterval[0], right = newInterval[1]; 
13        while (i < intervals.size() && intervals[i][0] <= newInterval[1]){
14            left = min (left, intervals[i][0]); 
15            right = max (right, intervals[i][1]); 
16            i++; 
17        }
18        ans.push_back({left, right}); 
19
20        // right non over lapping
21        while (i < intervals.size())
22            ans.push_back(intervals[i++]); 
23        
24        return ans; 
25    }
26};