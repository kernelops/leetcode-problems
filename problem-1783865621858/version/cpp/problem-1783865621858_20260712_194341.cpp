// Last updated: 7/12/2026, 7:43:41 PM
1class Solution {
2public:
3    int countServers(vector<vector<int>>& grid) 
4    {
5        int m = grid.size(), n = grid[0].size(); 
6
7        vector<int> rowCount(m, 0), colCount(n, 0); 
8
9        for (int i=0; i<m; i++){
10            for (int j=0; j<n; j++){
11                if (grid[i][j] == 1){
12                    rowCount[i]++; 
13                    colCount[j]++; 
14                }
15            }
16        }
17
18        int ans=0;
19        for (int i=0; i<m; i++){
20            for (int j=0; j<n; j++){
21                if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1))
22                    ans++; 
23            }
24        }
25
26        return ans; 
27    }
28};