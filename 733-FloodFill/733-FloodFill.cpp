// Last updated: 6/3/2026, 11:30:41 PM
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int ic = image[sr][sc]; 
        image[sr][sc] = color;
        queue<pair<int, int>> q; 
        vector<vector<int>> vis(image.size(), vector<int> (image[0].size(), 0)); 
        vis[sr][sc] = 1;

        q.push({sr, sc}); 
        int drow[] = {0, 0, -1, +1}; 
        int dcol[] = {-1, +1, 0, 0}; 
        while (!q.empty())
        {
            int r = q.front().first; 
            int c = q.front().second;
            q.pop(); 

            for (int i=0; i<4; i++)
            {
                int nrow = r + drow[i]; 
                int ncol = c + dcol[i];

                if (nrow>=0 && ncol>=0 && nrow<image.size() && ncol<image[0].size() && image[nrow][ncol] == ic && vis[nrow][ncol] != 1) 
                {
                    image[nrow][ncol] = color;
                    vis[nrow][ncol] = 1; 
                    q.push({nrow, ncol}); 
                }
            }
        } 

        return image;
    }
};