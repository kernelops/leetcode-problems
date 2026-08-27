// Last updated: 8/28/2026, 1:01:28 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10
11class Solution {
12public:
13    bool getPath(TreeNode* root, TreeNode* target, vector<TreeNode*> &path){
14        if (!root) return false; 
15
16        path.push_back(root);
17        if (root == target) return true; //Found
18
19        if (getPath(root->left, target, path) || getPath(root->right, target, path)) 
20            return true;
21
22        // backtracking
23        path.pop_back(); 
24        return false; 
25    }
26    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
27    {
28        vector<TreeNode*> ppath, qpath; 
29        bool pans = getPath(root, p, ppath); 
30        bool qans = getPath(root, q, qpath); 
31
32        int i=0; 
33        while (i < ppath.size() && i < qpath.size() && ppath[i] == qpath[i]) i++; 
34
35        return ppath[i-1];
36    }
37};