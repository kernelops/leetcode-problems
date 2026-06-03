// Last updated: 6/3/2026, 11:31:52 PM
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
    bool getPath(TreeNode* root, vector<TreeNode*> &path, TreeNode* target){
        if (!root) return false; 

        path.push_back(root); 
        if (root == target) return true; 

        if (getPath(root->left, path, target) || getPath(root->right, path, target))
            return true; 
        
        path.pop_back(); 

        return false; 
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p1; vector<TreeNode*> q1; 

        getPath(root, p1, p); 
        getPath(root, q1, q); 

        int i=0; 
        while (i < p1.size() && i < q1.size() && p1[i]->val == q1[i]->val) i++; 

        return p1[i-1]; 
    }
};