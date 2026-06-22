// Last updated: 6/22/2026, 12:00:05 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void inorder(TreeNode* root, vector<TreeNode*>& nodes) {
15        if (!root) return;
16        
17        inorder(root->left, nodes);
18        nodes.push_back(root);
19        inorder(root->right, nodes);
20    }
21
22    void recoverTree(TreeNode* root) {
23        vector<TreeNode*> nodes;
24        inorder(root, nodes);          
25
26        vector<int> vals;
27        for (auto node : nodes) vals.push_back(node->val);
28        sort(vals.begin(), vals.end()); 
29
30        TreeNode* first = nullptr;
31        TreeNode* second = nullptr;
32
33        for (int i = 0; i < (int)nodes.size(); i++) {
34            if (nodes[i]->val != vals[i]) {
35                if (!first) first = nodes[i];
36                else { second = nodes[i]; break; }
37            }
38        }
39
40        // swap
41        int tmp = first->val;
42        first->val = second->val;
43        second->val = tmp;
44    }
45};