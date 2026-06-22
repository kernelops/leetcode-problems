// Last updated: 6/22/2026, 11:13:09 AM
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
14    int dfs(TreeNode* root, int maxSoFar){
15        if (!root) return 0; 
16
17        int count=0; 
18        if (root->val >= maxSoFar){
19            count = 1; 
20            maxSoFar = root->val; 
21        }
22
23        count += dfs(root->left, maxSoFar); 
24        count += dfs(root->right, maxSoFar); 
25
26        return count; 
27    }
28    int goodNodes(TreeNode* root) 
29    {
30        if (!root) return 0;    
31        return dfs(root, INT_MIN);  
32    }
33};