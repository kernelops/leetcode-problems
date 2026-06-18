// Last updated: 6/18/2026, 11:46:24 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
8 * };
9 */
10class Solution {
11public:
12    bool getPath(TreeNode* root, vector<TreeNode*> &path, TreeNode* target)
13    {
14        if (!root) return false; 
15
16        path.push_back(root); 
17
18        if (root == target) return true; 
19        
20        if (getPath(root->left, path, target) || getPath(root->right, path, target))
21            return true; 
22        path.pop_back(); 
23
24        return false; 
25    }
26    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
27    {
28        vector<TreeNode*> p1, q1; 
29        getPath(root, p1, p); 
30        getPath(root, q1, q); 
31        
32        int i=0; 
33        while(i<p1.size() && i<q1.size() && (p1[i] == q1[i]))
34            i++; 
35        
36        return p1[--i];    
37    }
38};