// Last updated: 6/17/2026, 12:23:22 AM
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
    void inorder(TreeNode* root, vector<int> &ans){
        if (!root){
            //ans.push_back(INT_MIN); 
            return; 
        }

        inorder(root->left, ans); 
        ans.push_back(root->val); 
        inorder(root->right, ans); 
    }
    int rangeSumBST(TreeNode* root, int low, int high) 
    {
        if (!root) return 0; 

        vector<int> in; 
        inorder(root, in); 
        
        int sum=low; 
        for (int i=0; i<in.size(); i++){
            if (in[i] == low)
            {
                for (int j=i+1; j<in.size(); j++){
                    if (in[j] != high){
                        sum += in[j]; 
                    }
                    else {
                        sum += in[j]; 
                        return sum; 
                    }
                }
            }
        }

        return -1; 
    }
};