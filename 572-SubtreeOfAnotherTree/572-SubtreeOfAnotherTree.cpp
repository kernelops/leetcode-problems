// Last updated: 6/3/2026, 11:30:51 PM
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        vector<int> main; vector<int> sub; 
        preorder(root, main); 
        preorder(subRoot, sub); 

        for (int i=0; i<main.size(); i++){
            if (main[i] == sub[0]){
                bool match = true; 
                for (int j=0; j<sub.size(); j++){
                    if (main[i+j] != sub[j]){
                        match = false; 
                        break; 
                    }
                }
                if (match) return true; 
            }
        }    

        return false;
    }
};