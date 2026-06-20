// Last updated: 6/20/2026, 11:37:23 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool getPath(TreeNode* root, int target, vector<int> &path){
        if (!root) return false; 

        path.push_back(root->val);
        if (root->val == target) return true; 

        if (getPath(root->left, target, path) || getPath(root->right, target, path))
            return true; 
        
        path.pop_back();
        return false; 
    }
    bool isCousins(TreeNode* root, int x, int y) 
    {
        vector<int> xp, yp; 
        if (!getPath(root, x, xp)) return false; 
        if (!getPath(root, y, yp)) return false;

        if (xp.size() != yp.size()) return false; 
        if (xp.size() < 2) return false; 

        int parentX = xp[xp.size()-2]; 
        int parentY = yp[yp.size()-2];  

        return parentX != parentY;
    }
};