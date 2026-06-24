// Last updated: 6/24/2026, 6:13:25 PM
1class Solution {
2public:
3    int eraseOverlapIntervals(vector<vector<int>>& intervals) 
4    {
5        vector<vector<int>> revIntervals; 
6        for (auto i : intervals){
7            reverse(i.begin(), i.end()); 
8            revIntervals.push_back(i); 
9        }
10
11        sort(revIntervals.begin(), revIntervals.end()); 
12        int count=1, endTime = revIntervals[0][0]; 
13
14        for (auto i : revIntervals){
15            if (endTime <= i[1]){
16                endTime = i[0]; 
17                count++; 
18            }
19        }    
20
21        return intervals.size()-count;     
22    }
23};