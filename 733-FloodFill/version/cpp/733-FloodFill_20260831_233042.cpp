// Last updated: 8/31/2026, 11:30:42 PM
1class Solution {
2public:
3    void dfs(vector<vector<int>>& image, vector<vector<bool>>& vis, int sr, int sc, int oldcolor, int color) {
4        vis[sr][sc] = true; 
5        image[sr][sc] = color; 
6        int drow[] = {-1, 0, 1, 0}; 
7        int dcol[] = {0, 1, 0, -1};
8
9        for (int i=0; i<4; i++) {
10            int nrow = sr + drow[i]; 
11            int ncol = sc + dcol[i]; 
12
13            if (nrow >= 0 && nrow < image.size() && ncol >=0 && ncol < image[0].size() && !vis[nrow][ncol] && image[nrow][ncol] == oldcolor) 
14                dfs(image, vis, nrow, ncol, oldcolor, color); 
15        } 
16    }
17    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
18    {
19        vector<vector<bool>> vis(image.size(), vector<bool> (image[0].size(), false)); 
20        int oldcolor = image[sr][sc]; 
21        dfs(image, vis, sr, sc, oldcolor, color);
22
23        return image;     
24    }
25};