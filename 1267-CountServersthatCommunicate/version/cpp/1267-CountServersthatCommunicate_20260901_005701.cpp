// Last updated: 9/1/2026, 12:57:01 AM
1class Solution {
2public:
3    int countServers(vector<vector<int>>& grid) 
4    {
5        vector<int> rowCount(grid.size(), 0); 
6        vector<int> colCount(grid[0].size(), 0); 
7
8        for (int i=0; i<grid.size(); i++) {
9            int cnt=0; 
10            for (int j=0; j<grid[0].size(); j++)
11                if (grid[i][j] == 1) cnt++; 
12            rowCount[i] = cnt; 
13        }    
14
15        for (int i=0; i<grid[0].size(); i++) {
16            int cnt=0; 
17            for (int j=0; j<grid.size(); j++)
18                if (grid[j][i] == 1) cnt++; 
19            colCount[i] = cnt; 
20        }
21
22        int ans=0; 
23        for (int i=0; i<grid.size(); i++) {
24            for (int j=0; j<grid[0].size(); j++) {
25                if (grid[i][j] == 1 && (rowCount[i] > 1 || colCount[j] > 1)) ans++; 
26            }
27        }
28
29        return ans; 
30    }
31};