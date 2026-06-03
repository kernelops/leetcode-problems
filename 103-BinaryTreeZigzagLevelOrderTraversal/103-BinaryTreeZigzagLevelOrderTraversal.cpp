// Last updated: 6/3/2026, 11:33:23 PM
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if (root == NULL) return ans;
        q.push(root);
        bool flag=true;
        while (!q.empty())
        {
            int size = q.size();
            vector<int> temp;
            for (int i=0; i<size; i++)
            {
                TreeNode* node = q.front();
                temp.push_back(q.front()->val);
                q.pop();
                if (node->left != NULL) q.push(node->left); 
                if (node->right != NULL) q.push(node->right);
            }
            if (!flag)
                reverse(temp.begin(), temp.end());
            ans.push_back(temp);
            flag = !flag;
        }
        return ans;
    }
};