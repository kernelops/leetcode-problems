// Last updated: 7/12/2026, 8:32:07 PM
1class Solution {
2public:
3    int findChampion(int n, vector<vector<int>>& edges) 
4    {
5        vector<int> indegree(n, 0); 
6
7        for (auto i: edges)
8            indegree[i[1]]++; 
9
10        int ans=0, count=0; 
11        for (int i=0; i<n; i++){
12            if (indegree[i] == 0){
13                ans = i; 
14                count++; 
15            }
16            if (count > 1) return -1; 
17        }    
18
19        return ans; 
20    }
21};