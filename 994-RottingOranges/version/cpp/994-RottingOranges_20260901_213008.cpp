// Last updated: 9/1/2026, 9:30:08 PM
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) 
4    { 
5        queue<pair<int, int>> q; 
6        for (int i=0; i<grid.size(); i++) {
7            for (int j=0; j<grid[0].size(); j++) {
8                if (grid[i][j] == 2) q.push({i, j}); 
9            }
10        }  
11
12        int drow[] = {-1, 0, 1, 0}; 
13        int dcol[] = {0, 1, 0, -1};   
14
15        int ans=0; 
16        while (!q.empty()) {
17            int size = q.size(); 
18            for (int i=0; i<size; i++) {
19                auto node = q.front(); q.pop(); 
20                int r = node.first, c = node.second; 
21
22                for (int x=0; x<4; x++) {
23                    int nrow = r + drow[x];
24                    int ncol = c + dcol[x]; 
25
26                    if (nrow >= 0 && ncol >= 0 && ncol < grid[0].size() && nrow < grid.size() && grid[nrow][ncol] == 1) {
27                        grid[nrow][ncol] = 2; 
28                        q.push({nrow, ncol}); 
29                    } 
30                }
31            }
32            ans++; 
33        }
34
35        for (int i=0; i<grid.size(); i++) {
36            for (int j=0; j<grid[0].size(); j++) {
37                if (grid[i][j] == 1) return -1; 
38            }
39        } 
40
41        if (ans == 0) return 0; 
42        return ans-1; 
43    }
44};