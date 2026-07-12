// Last updated: 7/12/2026, 3:58:24 PM
1class Solution {
2public:
3    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
4    {
5        int ic = image[sr][sc]; 
6        if (ic == color) return image;
7
8        vector<vector<bool>> vis(image.size(), vector<bool> (image[0].size(), false)); 
9        image [sr][sc] = color; 
10        vis[sr][sc] = true; 
11
12        int drow[] = {1, 0, -1, 0}; 
13        int dcol[] = {0, 1, 0, -1};
14
15        queue<pair<int, int>> q; 
16        q.push({sr, sc}); 
17
18        while (!q.empty()){
19            auto node = q.front();
20            q.pop(); 
21
22            for (int i=0; i<4; i++){
23                int nrow = node.first + drow[i];
24                int ncol = node.second + dcol[i];
25
26                if (nrow >=0 && ncol >=0 && nrow < image.size() && ncol < image[0].size() && !vis[nrow][ncol] && image[nrow][ncol] == ic){
27                    q.push({nrow, ncol}); 
28                    vis[nrow][ncol] = true; 
29                    image[nrow][ncol] = color; 
30                } 
31            }
32        }
33
34        return image; 
35    }
36};