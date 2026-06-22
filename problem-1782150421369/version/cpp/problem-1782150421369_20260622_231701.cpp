// Last updated: 6/22/2026, 11:17:01 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void bfs(TreeNode* root, vector<vector<TreeNode*>> &levels)
15    {
16        queue<TreeNode*> q; 
17        q.push(root); 
18
19        while (!q.empty()){
20            int size = q.size(); 
21            vector<TreeNode*> level; 
22
23            for (int i=0; i<size; i++){
24                TreeNode* node = q.front(); 
25                q.pop(); 
26                level.push_back(node); 
27
28                if (node->left) q.push(node->left); 
29                if (node->right) q.push(node->right); 
30            }
31            levels.push_back(level); 
32        }
33    }
34    int findBottomLeftValue(TreeNode* root) 
35    {
36        vector<vector<TreeNode*>> levels; 
37        bfs(root, levels); 
38
39        return levels[levels.size()-1][0]->val; 
40    }
41};