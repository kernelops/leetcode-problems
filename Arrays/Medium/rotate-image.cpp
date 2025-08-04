class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        vector<int> internal;
        vector<vector<int>> rotated; int a=0;
        for (int i=0; i<matrix[0].size(); i++)
        {
            for (int j=0; j<matrix.size(); j++)
            {
                int val = matrix[matrix.size()-1-j][a];
                internal.push_back(val);
            }
            rotated.push_back(internal);
            internal.clear(); a++;
        }
        for (int i=0; i<matrix.size(); i++)
            matrix[i] = rotated[i];  
    }
};