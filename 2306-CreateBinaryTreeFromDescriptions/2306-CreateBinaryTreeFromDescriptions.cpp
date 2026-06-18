// Last updated: 6/18/2026, 7:35:39 PM
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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) 
    {
        unordered_map<int, TreeNode*> mpp; 
        unordered_set<int> children; 

        for (auto i: descriptions){
            int p = i[0]; 
            int c = i[1]; 
            int isleft = i[2]; 

            if (mpp.find(p) == mpp.end()){
                TreeNode* parent = new TreeNode(p);
                mpp[p] = parent; 
            }

            if (mpp.find(c) == mpp.end()){
                TreeNode* child = new TreeNode(c); 
                mpp[c] = child; 
            }

            if (isleft == 1)
                mpp[p]->left = mpp[c]; 
            else mpp[p]->right = mpp[c]; 

            children.insert(c); 
        }

        int node = -1; 
        for (auto i: mpp){
            if (children.find(i.first) == children.end()){
                node = i.first; 
                break; 
            }
        }

        return mpp[node]; 
    }
};