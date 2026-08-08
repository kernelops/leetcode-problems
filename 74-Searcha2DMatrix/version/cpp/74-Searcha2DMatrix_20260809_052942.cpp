// Last updated: 8/9/2026, 5:29:42 AM
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m = matrix.size(); 
5        int n = matrix[0].size(); 
6
7        for (int i=0; i<m; i++){
8            int left = 0, right = n-1; 
9            while (left <= right){
10                int mid = left + (right-left); 
11                if (matrix[i][mid] == target) return true; 
12
13                else if (matrix[i][mid] > target) right = mid-1; 
14                else left = mid+1; 
15            }
16        }
17
18        return false;
19    }
20};