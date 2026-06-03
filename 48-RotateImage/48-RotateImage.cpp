// Last updated: 6/3/2026, 11:34:09 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        vector<vector<int>> temp;
        vector<int> inner;
        for (int i=0; i<matrix[0].size(); i++)
        {
            for (int j=matrix.size()-1; j>=0; j--)
            {
                inner.push_back(matrix[j][i]);
            }
            temp.push_back(inner);
            inner.clear();
        }
        matrix.clear();
        matrix=temp;    
    }
};