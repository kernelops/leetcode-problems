// Last updated: 6/19/2026, 12:30:00 AM
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
14    TreeNode* reverseOddLevels(TreeNode* root) 
15    {
16        queue<TreeNode*> q; 
17        q.push(root); 
18        int level=1; 
19
20        while (!q.empty()){
21            int size = q.size();
22            vector<TreeNode*> nodes;
23
24            for (int i=0; i<size; i++){
25                TreeNode* node = q.front(); 
26                q.pop(); 
27                nodes.push_back(node); 
28
29                if (node->left) q.push(node->left); 
30                if (node->right) q.push(node->right); 
31            }
32
33            if (level % 2 == 0){
34                int l=0, r=nodes.size()-1;
35                while (l<r){
36                    swap(nodes[l]->val, nodes[r]->val); 
37                    l++; r--; 
38                } 
39            }
40
41            level++; 
42        }    
43
44        return root; 
45    }
46};