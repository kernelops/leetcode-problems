// Last updated: 6/3/2026, 11:33:45 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); 
        int n = matrix[0].size(); 

        for (int i=0; i<m; i++){
            int left = 0, right = n-1; 
            while (left <= right){
                int mid = left + (right-left); 
                if (matrix[i][mid] == target) return true; 

                else if (matrix[i][mid] > target) right = mid-1; 
                else left = mid+1; 
            }
        }

        return false;
    }
};