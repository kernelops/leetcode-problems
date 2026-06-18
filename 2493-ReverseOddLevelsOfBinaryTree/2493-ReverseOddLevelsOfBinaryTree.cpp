// Last updated: 6/19/2026, 12:46:58 AM
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
    TreeNode* reverseOddLevels(TreeNode* root) 
    {
        queue<TreeNode*> q; 
        q.push(root); 
        int level=1; 

        while (!q.empty()){
            int size = q.size();
            vector<TreeNode*> nodes;

            for (int i=0; i<size; i++){
                TreeNode* node = q.front(); 
                q.pop(); 
                nodes.push_back(node); 

                if (node->left) q.push(node->left); 
                if (node->right) q.push(node->right); 
            }

            if (level % 2 == 0){
                int l=0, r=nodes.size()-1;
                while (l<r){
                    swap(nodes[l]->val, nodes[r]->val); 
                    l++; r--; 
                } 
            }

            level++; 
        }    

        return root; 
    }
};