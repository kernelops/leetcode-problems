// Solution Approach-1
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int ecol=matrix[0].size()-1, srow=0, erow = matrix.size()-1;
        while (ecol >= 0 && srow <= erow){
            
            if (target < matrix[srow][ecol]){
            // row-towards left
            for (int i=ecol; i>=0; i--)
                if (matrix[srow][i] == target)
                    return true;
            }
            else if (target == matrix[srow][ecol]) return true;
            else {
            // column-down
            for (int i=srow; i<=erow; i++)
                if (matrix[i][ecol] == target)   
                    return true;
            }
            ecol--; srow++;
        }
        return false;

    }
};

// Solution Approach-2 - (Binary Search on each row)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for (int i=0; i<matrix.size(); i++)
        {
            int st=0, end=matrix[0].size()-1;
            while (st<=end){
                int mid = st + (end-st)/2;
                if (matrix[i][mid] == target) return true;
                if (matrix[i][mid] > target) end = mid-1;
                else st = mid+1;
            }
        }
        return false;    
    }
};

// Solution Approach-3 (Brute-force) 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size(), n = matrix[0].size(); 
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
                if (matrix[i][j] == target)
                    return true;
        }
        return false;
    }
};