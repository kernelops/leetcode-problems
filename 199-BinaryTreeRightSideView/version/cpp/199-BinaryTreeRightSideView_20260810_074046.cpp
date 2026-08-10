// Last updated: 8/10/2026, 7:40:46 AM
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
14    vector<int> rightSideView(TreeNode* root) 
15    {
16        vector<int> ans;
17        if (!root) return ans; 
18        
19        queue<TreeNode*> q; 
20        q.push(root);     
21
22        while (!q.empty()){
23            int size = q.size(); 
24            vector<int> level; 
25            for (int i=0; i<size; i++){
26                TreeNode* node = q.front(); 
27                q.pop(); 
28
29                if (node->left) q.push(node->left); 
30                if (node->right) q.push(node->right); 
31
32                level.push_back(node->val); 
33            }
34
35            ans.push_back(level[level.size()-1]); 
36        }
37
38        return ans; 
39    }
40};