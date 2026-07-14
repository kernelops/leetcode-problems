// Last updated: 7/14/2026, 10:28:07 AM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<bool>>& vis){
4        vis[i][j] = true; 
5
6        int drow[] = {1, 0, -1, 0}; 
7        int dcol[] = {0, 1, 0, -1}; 
8
9        for (int x=0; x<4; x++){
10            int nrow = i + drow[x]; 
11            int ncol = j + dcol[x]; 
12
13            if (nrow >=0 && ncol >= 0 && nrow < heights.size() && ncol < heights[0].size() && !vis[nrow][ncol] && heights[nrow][ncol] >= heights[i][j]){
14                dfs(nrow, ncol, heights, vis); 
15            }
16        }
17    }
18    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
19    {
20        int m = heights.size(), n = heights[0].size(); 
21        vector<vector<bool>> pacific(m, vector<bool> (n, false)); 
22        vector<vector<bool>> atlantic(m, vector<bool> (n, false));
23        vector<vector<int>> ans; 
24
25        // pacific (1st row)
26        for (int i=0; i<n; i++) 
27            if (!pacific[0][i]) dfs(0, i, heights, pacific); 
28        
29        // pacific (1st col)
30        for (int i=0; i<m; i++)
31           if (!pacific[i][0]) dfs(i, 0, heights, pacific); 
32        
33        //atlantic (last col)
34        for (int i=0; i<m; i++)
35            if (!atlantic[i][n-1]) dfs(i, n-1, heights, atlantic);
36        
37        // atlantic (last row)
38        for (int i=0; i<n; i++)
39            if (!atlantic[m-1][i]) dfs(m-1, i, heights, atlantic); 
40        
41        for (int i=0; i<m; i++){
42            for (int j=0; j<n; j++)
43                if (pacific[i][j] && atlantic[i][j])
44                    ans.push_back({i, j}); 
45        }
46
47        return ans; 
48    }
49};