// Last updated: 6/22/2026, 11:11:46 PM
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
14    bool flipEquiv(TreeNode* root1, TreeNode* root2) 
15    {
16        if (!root1 && !root2) return true; 
17        if (!root1 || !root2) return false; 
18        if (root1->val != root2->val) return false; 
19
20        // bool noFlip = flipEquiv(root1->left, root2->left) && 
21        //             flipEquiv(root1->right, root2->right); 
22
23        // bool Flip = flipEquiv(root1->left, root2->right) && 
24        //             flipEquiv(root1->right, root2->left);  
25
26        return (flipEquiv(root1->left, root2->left) && 
27            flipEquiv(root1->right, root2->right)) || 
28                (flipEquiv(root1->left, root2->right) && 
29                    flipEquiv(root1->right, root2->left));     
30    }
31};