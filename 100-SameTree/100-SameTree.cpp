// Last updated: 6/3/2026, 11:33:27 PM
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
    void preorder(TreeNode* root, vector<int> &ans){
        if (root == NULL){
            ans.push_back(INT_MIN); 
            return; 
        } 
        ans.push_back(root->val); 
        preorder(root->left, ans); 
        preorder(root->right, ans); 
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        vector<int> p1; vector<int> q1; 
        preorder(p, p1); 
        preorder(q, q1); 

        if (p1.size() != q1.size()) return false;

        for (int i=0; i<p1.size(); i++){
            if (p1[i] != q1[i]) return false; 
        }    

        return true; 
    }
};