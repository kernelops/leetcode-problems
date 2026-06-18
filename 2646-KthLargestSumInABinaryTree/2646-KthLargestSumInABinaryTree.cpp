// Last updated: 6/19/2026, 12:46:54 AM
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
    long long kthLargestLevelSum(TreeNode* root, int k) 
    {
        vector<long long> levelSum; 
        queue<TreeNode*> q; 
        q.push(root); 

        while (!q.empty()){
            int size = q.size(); long long sum=0; 

            for (int i=0; i<size; i++){
                TreeNode* node = q.front(); 
                q.pop(); 
                sum += node->val; 

                if (node->left) q.push(node->left); 
                if (node->right) q.push(node->right); 
            }

            levelSum.push_back(sum); 
        }    
 
        if (k > levelSum.size()) return -1; 
        //sort(levelSum.begin(), levelSum.end()); // ascending sort
        //return levelSum[levelSum.size()-k]; // answer for ascending sort
        
        sort(levelSum.begin(), levelSum.end(), greater<long long>()); // descending sort
        return levelSum[k-1]; // answer for descending sort
    }
};