// Last updated: 6/3/2026, 11:31:50 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool getPath(TreeNode* root, TreeNode* node, vector<TreeNode*>& path)
    {
        if (root == NULL) return false;

        path.push_back(root);

        if (root->val == node->val) return true; 

        if (getPath(root->left, node, path) ||
            getPath(root->right, node, path))
            return true;                          

        path.pop_back();                          
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        vector<TreeNode*> p1;
        vector<TreeNode*> p2;
        
        if (root == NULL) return nullptr;
        getPath(root, p, p1);
        getPath(root, q, p2);

        int a=0; 
        while (a < p1.size() && a < p2.size() && p1[a]->val == p2[a]->val)
            a++;

        return p1[a-1]; 
    }
};