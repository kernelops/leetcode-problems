// Last updated: 9/1/2026, 11:46:12 AM
1class Solution {
2public:
3    int findChampion(int n, vector<vector<int>>& edges) 
4    {
5        vector<int> inorder(n, 0);
6        for (auto i: edges) {
7            inorder[i[1]]++; 
8        }     
9
10        int cnt=0; 
11        for (int i: inorder) if (i == 0) cnt++; 
12
13        if (cnt == 1) {
14            for (int i=0; i<inorder.size(); i++) {
15                if (inorder[i] == 0) return i; 
16            }
17        }
18
19        return -1; 
20    }
21};