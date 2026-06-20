// Last updated: 6/20/2026, 11:37:07 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    bool match(TreeNode* root, ListNode* &node)
    {   
        if (!node) return true; 
        if (!root) return false; 

        if (root->val != node->val) return false; 

        return match(root->left, node->next) || match(root->right, node->next); 
    }
    bool isSubPath(ListNode* head, TreeNode* root) 
    {
        if (!root) return false; 

        if (match(root, head)) return true;

        return isSubPath(head, root->left) ||
            isSubPath(head, root->right);
    }
};