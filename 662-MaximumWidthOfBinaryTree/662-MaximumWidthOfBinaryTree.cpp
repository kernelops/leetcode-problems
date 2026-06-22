// Last updated: 6/22/2026, 12:01:51 PM
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
    int widthOfBinaryTree(TreeNode* root) 
    {
        queue<pair<TreeNode*, long long>> q; 
        q.push({root, 0}); long long maxWidth=0; 

        while (!q.empty()){
            int size = q.size(); 
            long long mini = q.front().second; 
            long long first=0, last=0; 

            for (int i=0; i<size; i++)
            {
                auto node = q.front(); 
                q.pop(); 
                if (i==0) first = node.second; 
                if (i==size-1) last = node.second; 

                if (node.first->left) q.push({node.first->left, 2*(node.second-mini)+1});
                if (node.first->right) q.push({node.first->right, 2*(node.second-mini)+2});
            }

            maxWidth = (int)max(maxWidth, last-first+1); 
        }    

        return (int)maxWidth; 
    }
};