class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_set<string> seen;
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                char num = board[i][j];
                if (num != '.'){
                    // row
                    string row = "row"+to_string(i)+num;
                    if (seen.count(row)) return false;
                    seen.insert(row);

                    // column
                    string col = "col"+to_string(j)+num;
                    if (seen.count(col)) return false;
                    seen.insert(col);

                    //box
                    string box = "box"+to_string(i/3)+to_string(j/3)+num;
                    if (seen.count(box)) return false;
                    seen.insert(box);
                }
                
            }
        }
        return true;
    }
};