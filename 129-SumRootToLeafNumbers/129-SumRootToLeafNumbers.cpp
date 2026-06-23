// Last updated: 6/23/2026, 11:12:58 AM
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
    void dfs(TreeNode* root, vector<vector<int>> &paths, vector<int> &temp)
    {
        if (!root) return;

        if (root) temp.push_back(root->val);

        if (!root->left && !root->right){
            paths.push_back(temp); 
        }
        else{
            dfs(root->left, paths, temp); 
            dfs(root->right, paths, temp); 
        }

        temp.pop_back(); 
    }
    int sumNumbers(TreeNode* root) 
    {
        long long sum=0; 
        string val=""; 
        vector<vector<int>> paths; 
        vector<int> temp; 

        dfs(root, paths, temp); 

        for (auto path: paths){
            for (int i=0; i<path.size(); i++){
                val += to_string(path[i]); 
            }

            sum += stoi(val); 
            val=""; 
        }

        return (int)sum; 
    }
};