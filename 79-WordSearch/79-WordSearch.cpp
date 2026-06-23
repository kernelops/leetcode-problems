// Last updated: 6/23/2026, 11:24:38 PM
1class Solution {
2public:
3    bool check(vector<vector<char>>& board, string word, int idx, int r, int c){
4        // base cases
5        if (idx == word.size()) return true; 
6
7        int rowCount = board.size();
8        int colCount = board[0].size();  
9
10        if (r<0 || c<0 || r >= rowCount || c >= colCount) return false; 
11        if (board[r][c] != word[idx]) return false; 
12
13        // backtrack requirements
14        char temp = board[r][c]; 
15        
16        board[r][c] = '#'; 
17
18        // recursion
19        bool found = check (board, word, idx+1, r, c+1) ||
20                    check (board, word, idx+1, r, c-1) ||
21                    check (board, word, idx+1, r+1, c) || 
22                    check (board, word, idx+1, r-1, c); 
23
24        // backtrack
25        board[r][c] = temp; 
26
27        return found; 
28    }
29    bool exist(vector<vector<char>>& board, string word) 
30    {
31        int r = board.size(); 
32        int c = board[0].size(); 
33
34        for (int i=0; i<r; i++){
35            for (int j=0; j<c; j++){
36                if (board[i][j] == word[0]){
37                    if (check(board, word, 0, i, j)) return true; 
38                }
39            }
40        }
41        return false; 
42    }
43};