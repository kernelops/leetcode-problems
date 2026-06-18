// Last updated: 6/18/2026, 10:30:25 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        vector<vector<Node*>> levels; 
        if (!root) return nullptr;

        queue<Node*> q; 
        q.push(root); 

        while (!q.empty()){
            int size = q.size(); 
            vector<Node*> level; 
            for (int i=0; i<size; i++){
                Node* node = q.front(); 
                q.pop(); 
                if (node->left) q.push(node->left); 
                if (node->right) q.push(node->right); 
                level.push_back(node);
            }
            levels.push_back(level); 
        }    

        for (auto &i: levels)
        {
            for (int j=0; j<i.size(); j++){
                if (j == i.size()-1) i[j]->next = nullptr; 
                else i[j]->next = i[j+1]; 
            }
        }

        return root; 
    }
};