// Last updated: 6/22/2026, 1:17:43 PM
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
14    void dfs(TreeNode* root, vector<vector<int>> &paths, vector<int> &temp)
15    {
16        if (!root) return;
17
18        if (root) temp.push_back(root->val);
19
20        if (!root->left && !root->right){
21            paths.push_back(temp); 
22        }
23        else{
24            dfs(root->left, paths, temp); 
25            dfs(root->right, paths, temp); 
26        }
27
28        temp.pop_back(); 
29    }
30    int sumNumbers(TreeNode* root) 
31    {
32        long long sum=0; 
33        string val=""; 
34        vector<vector<int>> paths; 
35        vector<int> temp; 
36
37        dfs(root, paths, temp); 
38
39        for (auto path: paths){
40            for (int i=0; i<path.size(); i++){
41                val += to_string(path[i]); 
42            }
43
44            sum += stoi(val); 
45            val=""; 
46        }
47
48        return (int)sum; 
49    }
50};