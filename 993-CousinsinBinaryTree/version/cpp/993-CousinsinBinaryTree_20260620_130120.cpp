// Last updated: 6/20/2026, 1:01:20 PM
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
14    bool getPath(TreeNode* root, int target, vector<int> &path){
15        if (!root) return false; 
16
17        path.push_back(root->val);
18        if (root->val == target) return true; 
19
20        if (getPath(root->left, target, path) || getPath(root->right, target, path))
21            return true; 
22        
23        path.pop_back();
24        return false; 
25    }
26    bool isCousins(TreeNode* root, int x, int y) 
27    {
28        vector<int> xp, yp; 
29        if (!getPath(root, x, xp)) return false; 
30        if (!getPath(root, y, yp)) return false;
31
32        if (xp.size() != yp.size()) return false; 
33        if (xp.size() < 2) return false; 
34
35        int parentX = xp[xp.size()-2]; 
36        int parentY = yp[yp.size()-2];  
37
38        return parentX != parentY;
39    }
40};