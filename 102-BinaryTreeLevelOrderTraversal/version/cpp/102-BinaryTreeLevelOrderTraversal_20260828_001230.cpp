// Last updated: 8/28/2026, 12:12:30 AM
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
14    vector<vector<int>> levelOrder(TreeNode* root) 
15    {
16        queue<TreeNode*> q; 
17        q.push(root); 
18        vector<vector<int>> ans; 
19        if (!root) return ans; 
20
21        while (!q.empty()){
22            int size = q.size(); 
23            vector<int> temp; 
24            for (int i=0; i<size; i++){
25                TreeNode* node = q.front(); 
26                q.pop(); 
27                temp.push_back(node->val); 
28
29                if (node->left) q.push(node->left); 
30                if (node->right) q.push(node->right); 
31            }
32            ans.push_back(temp); 
33        }
34
35        return ans; 
36    }
37};