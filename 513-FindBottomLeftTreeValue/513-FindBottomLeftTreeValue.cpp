// Last updated: 6/23/2026, 11:11:45 AM
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
    void bfs(TreeNode* root, vector<vector<TreeNode*>> &levels)
    {
        queue<TreeNode*> q; 
        q.push(root); 

        while (!q.empty()){
            int size = q.size(); 
            vector<TreeNode*> level; 

            for (int i=0; i<size; i++){
                TreeNode* node = q.front(); 
                q.pop(); 
                level.push_back(node); 

                if (node->left) q.push(node->left); 
                if (node->right) q.push(node->right); 
            }
            levels.push_back(level); 
        }
    }
    int findBottomLeftValue(TreeNode* root) 
    {
        vector<vector<TreeNode*>> levels; 
        bfs(root, levels); 

        return levels[levels.size()-1][0]->val; 
    }
};