// Last updated: 7/13/2026, 8:22:59 PM
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) 
4    {
5        queue<pair<int, int>> q; 
6        int m=grid.size(), n=grid[0].size();
7
8        for (int i=0; i<m; i++){
9            for (int j=0; j<n; j++)
10                if (grid[i][j] == 2) q.push({i, j}); 
11        }    
12
13        int drow[] = {1, 0, -1, 0}; 
14        int dcol[] = {0, 1, 0, -1}; 
15        int ans=0; 
16
17        while (!q.empty()){
18            int size = q.size(); 
19            bool flag = false; 
20            for (int i=0; i<size; i++){
21                auto node = q.front(); 
22                q.pop(); 
23
24                for (int j=0; j<4; j++){
25                    int nrow = node.first + drow[j]; 
26                    int ncol = node.second + dcol[j]; 
27
28                    if (nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == 1){
29                        flag = true; 
30                        grid[nrow][ncol] = 2; 
31                        q.push({nrow, ncol}); 
32                    }
33                }
34            }
35
36            if (flag) ans++; 
37        }
38
39        for (int i=0; i<m; i++)
40            for (int j=0; j<n; j++) if (grid[i][j] == 1) return -1;    
41
42        return ans; 
43    }
44};