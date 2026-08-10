// Last updated: 8/10/2026, 9:09:21 AM
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
17
18        if (root == target) return true; 
19
20        if (getPath(root->left, target, path) || getPath(root->right, target, path))
21            return true; 
22
23        // backtracking
24        path.pop_back(); 
25        return false; 
26    }
27    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
28    {
29        vector<TreeNode*> pathp, pathq; 
30        if (!root) return nullptr; 
31
32        getPath(root, p, pathp); 
33        getPath(root, q, pathq); 
34
35        int i=0; 
36        while (i < pathp.size() && i < pathq.size()){
37            if (pathp[i] != pathq[i]) break; 
38            i++; 
39        }
40
41        return pathp[i-1]; 
42    }
43};