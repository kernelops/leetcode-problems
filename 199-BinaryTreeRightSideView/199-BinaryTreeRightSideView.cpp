// Last updated: 6/3/2026, 11:32:26 PM
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
    vector<int> rightSideView(TreeNode* root) 
    {
        queue<TreeNode*> q; 
        q.push(root); 

        vector<int> ans; 
        if (root == NULL) return ans;
        while (!q.empty()){
            int size = q.size(); 

            vector<TreeNode*> temp; 
            for (int i=0; i<size; i++){
                TreeNode* node = q.front(); 
                temp.push_back(node); 
                q.pop();
                if (node->left != NULL) q.push(node->left); 
                if (node->right != NULL) q.push(node->right); 
            }

            ans.push_back(temp[temp.size()-1]->val); 
        }    

        return ans; 
    }
};