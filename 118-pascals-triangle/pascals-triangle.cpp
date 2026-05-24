class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans; 
        if (numRows == 0) return ans; 
        if (numRows == 1){
            ans.push_back({1}); 
            return ans; 
        }
        if (numRows == 2){
            ans.push_back({1}); ans.push_back({1, 1}); 
            return ans; 
        }   

        ans.push_back({1}); ans.push_back({1, 1}); 

        for (int i=2; i<numRows; i++){
            vector<int> temp;
            temp.push_back(1); 
            for (int j=1; j<ans[ans.size()-1].size(); j++){
                temp.push_back(ans[ans.size()-1][j] + ans[ans.size()-1][j-1]); 
            }
            temp.push_back(1); 
            ans.push_back(temp); 
        }

        return ans; 
    }
};