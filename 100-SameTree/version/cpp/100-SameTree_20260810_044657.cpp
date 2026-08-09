// Last updated: 8/10/2026, 4:46:57 AM
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
14    void preorder(TreeNode* root, vector<int> &pre){
15        if (!root){
16            pre.push_back(INT_MIN); 
17            return; 
18        }
19
20        pre.push_back(root->val); 
21        preorder(root->left, pre); 
22        preorder(root->right, pre); 
23    }
24    bool isSameTree(TreeNode* p, TreeNode* q) 
25    {
26        vector<int> prep, preq; 
27        preorder(p, prep); 
28        preorder(q, preq); 
29        if (prep.size() != preq.size()) return false; 
30
31        for (int i=0; i<prep.size(); i++){
32            if (prep[i] != preq[i]) return false; 
33        }
34
35        return true; 
36    }   
37};