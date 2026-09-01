// Last updated: 9/1/2026, 10:26:21 PM
1class Solution {
2public:
3    void dfs(vector<vector<int>>& grid2, vector<vector<bool>>& vis, int i, int j, vector<pair<int, int>> &island) {
4        vis[i][j] = true; 
5        island.push_back({i, j}); 
6
7        int drow[] = {-1, 0, 1, 0}; 
8        int dcol[] = {0, 1, 0, -1};
9
10        for (int x=0; x<4; x++) {
11            int nrow = i + drow[x]; 
12            int ncol = j + dcol[x]; 
13
14            if (nrow >= 0 && ncol >= 0 && nrow < grid2.size() && ncol < grid2[0].size() &&
15                grid2[nrow][ncol] == 1 && !vis[nrow][ncol]) 
16                dfs(grid2, vis, nrow, ncol, island); 
17        } 
18    }
19    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
20    {
21        vector<vector<bool>> vis(grid2.size(), vector<bool> (grid2[0].size(), false)); 
22        vector<vector<pair<int, int>>> islands; 
23        for (int i=0; i<grid2.size(); i++) {
24            for (int j=0; j<grid2[0].size(); j++) {
25                if (grid2[i][j] == 1 && !vis[i][j]) {
26                    vector<pair<int, int>> island; 
27                    dfs(grid2, vis, i, j, island); 
28                    islands.push_back(island); 
29                }
30            }
31        } 
32        
33        int ans=0; 
34        for (auto i: islands) {
35            bool flag = false; 
36            for (auto j : i) {
37                if (grid1[j.first][j.second] != 1) {
38                    flag = true; 
39                    break; 
40                }
41            }
42            if (!flag) ans++; 
43        }   
44
45        return ans; 
46    }
47};