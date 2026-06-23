// Last updated: 6/23/2026, 11:13:11 AM
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
    void inorder(TreeNode* root, vector<TreeNode*>& nodes) {
        if (!root) return;
        
        inorder(root->left, nodes);
        nodes.push_back(root);
        inorder(root->right, nodes);
    }

    void recoverTree(TreeNode* root) {
        vector<TreeNode*> nodes;
        inorder(root, nodes);          

        vector<int> vals;
        for (auto node : nodes) vals.push_back(node->val);
        sort(vals.begin(), vals.end()); 

        TreeNode* first = nullptr;
        TreeNode* second = nullptr;

        for (int i = 0; i < (int)nodes.size(); i++) {
            if (nodes[i]->val != vals[i]) {
                if (!first) first = nodes[i];
                else { second = nodes[i]; break; }
            }
        }

        // swap
        int tmp = first->val;
        first->val = second->val;
        second->val = tmp;
    }
};