// Last updated: 6/22/2026, 12:13:02 AM
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
14    int widthOfBinaryTree(TreeNode* root) 
15    {
16        queue<pair<TreeNode*, long long>> q; 
17        q.push({root, 0}); long long maxWidth=0; 
18
19        while (!q.empty()){
20            int size = q.size(); 
21            long long mini = q.front().second; 
22            long long first=0, last=0; 
23
24            for (int i=0; i<size; i++)
25            {
26                auto node = q.front(); 
27                q.pop(); 
28                if (i==0) first = node.second; 
29                if (i==size-1) last = node.second; 
30
31                if (node.first->left) q.push({node.first->left, 2*(node.second-mini)+1});
32                if (node.first->right) q.push({node.first->right, 2*(node.second-mini)+2});
33            }
34
35            maxWidth = (int)max(maxWidth, last-first+1); 
36        }    
37
38        return (int)maxWidth; 
39    }
40};