// Last updated: 6/3/2026, 11:33:46 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> temp = matrix;
        for(int i=0; i<temp.size(); i++)
        {
            for (int j=0; j<temp[0].size(); j++)
            {
                if (temp[i][j] == 0)
                {
                    for (int x=0; x<temp[0].size(); x++)
                        matrix[i][x] = 0;
                    for (int y=0; y<temp.size(); y++)
                        matrix[y][j] = 0;
                }
            }
        }
    }
};