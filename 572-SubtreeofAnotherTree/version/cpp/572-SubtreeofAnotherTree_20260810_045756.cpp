// Last updated: 8/10/2026, 4:57:56 AM
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
14    void preorder(TreeNode* root, vector<int> &pre){
15        if (!root){
16            pre.push_back(INT_MIN); 
17            return; 
18        }
19
20        pre.push_back(root->val); 
21        preorder(root->left, pre); 
22        preorder(root->right, pre); 
23    }
24    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
25        if ((root && !subRoot) || (!root && subRoot)) return false; 
26        if (!root && !subRoot) return true; 
27
28        vector<int> rpre, srpre; 
29        preorder(root, rpre); 
30        preorder(subRoot, srpre); 
31
32        for (int i=0; i<rpre.size(); i++){
33            if (rpre[i] == srpre[0]){
34                bool flag = true; 
35                for (int j=0; j<srpre.size(); j++){
36                    if (rpre[i+j] != srpre[j]) flag = false; 
37                }
38
39                if (flag) return true; 
40            }
41        } 
42
43        return false; 
44    }
45};