// Last updated: 6/19/2026, 12:43:42 AM
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
14    long long kthLargestLevelSum(TreeNode* root, int k) 
15    {
16        vector<long long> levelSum; 
17        queue<TreeNode*> q; 
18        q.push(root); 
19
20        while (!q.empty()){
21            int size = q.size(); long long sum=0; 
22
23            for (int i=0; i<size; i++){
24                TreeNode* node = q.front(); 
25                q.pop(); 
26                sum += node->val; 
27
28                if (node->left) q.push(node->left); 
29                if (node->right) q.push(node->right); 
30            }
31
32            levelSum.push_back(sum); 
33        }    
34 
35        if (k > levelSum.size()) return -1; 
36        sort(levelSum.begin(), levelSum.end());
37
38        return levelSum[levelSum.size()-k]; 
39    }
40};