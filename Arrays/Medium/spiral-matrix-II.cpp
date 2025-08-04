class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<int> nums;
        for (int i=1; i<=n*n; i++)
            nums.push_back(i);
        
        vector<vector<int>> matrix (n, vector<int>(n, 0));
        int srow=0, scol=0, erow=n-1, ecol=n-1; int idx=0;
        while (scol <= ecol && srow <= erow){
            // top
            for (int i = scol; i<=ecol; i++){
                matrix[srow][i] = nums[idx]; idx++;
            }

            // right
            for (int i = srow+1; i<=erow; i++){
                matrix[i][ecol] = nums[idx]; idx++;
            }

            // bottom 
            for (int i = ecol-1; i>=scol; i--){
                if (srow == erow) break;
                matrix[erow][i] = nums[idx]; idx++;
            }

            // left  
            for (int i = erow-1; i>=srow+1; i--){
                if (scol == ecol) break;
                matrix[i][scol] = nums[idx]; idx++;;
            }
            
            srow++; scol++; erow--; ecol--;  
        } 
        return matrix;
    };
};