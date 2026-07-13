// Last updated: 7/13/2026, 8:59:56 PM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<char>>& board, vector<vector<bool>> &vis){
4        vis[i][j] = true; 
5        board[i][j] = 'A';
6
7        int drow[] = {1, 0, -1, 0}; 
8        int dcol[] = {0, 1, 0, -1}; 
9
10        for (int x=0; x<4; x++){
11            int nrow = i + drow[x]; 
12            int ncol = j + dcol[x]; 
13
14            if (nrow >=0 && nrow < board.size() && ncol >= 0 && ncol < board[0].size() && board[nrow][ncol] == 'O' && !vis[nrow][ncol]){
15                board[nrow][ncol] = 'A'; 
16                dfs(nrow, ncol, board, vis); 
17            }
18        }
19    }
20    void solve(vector<vector<char>>& board) 
21    {
22        int m = board.size(), n = board[0].size(); 
23        vector<vector<bool>> vis(m, vector<bool> (n, false)); 
24
25        for (int i=0; i<n; i++)
26            if (board[0][i] == 'O') dfs(0, i, board, vis); 
27        
28        for (int i=0; i<n; i++)
29            if (board[m-1][i] == 'O') dfs(m-1, i, board, vis); 
30
31        for (int i=0; i<m; i++)
32            if (board[i][0] == 'O') dfs(i, 0, board, vis); 
33
34        for (int i=0; i<m; i++)
35            if (board[i][n-1] == 'O') dfs(i, n-1, board, vis); 
36        
37        for (int i=0; i<m; i++){
38            for (int j=0; j<n; j++){
39                if (board[i][j] == 'O') board[i][j] = 'X'; 
40            }
41        }
42
43        for (int i=0; i<m; i++){
44            for (int j=0; j<n; j++){
45                if (board[i][j] == 'A') board[i][j] = 'O'; 
46            }
47        }
48    }
49};