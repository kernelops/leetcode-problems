// Last updated: 6/18/2026, 10:42:57 PM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    Node* left;
7    Node* right;
8    Node* next;
9
10    Node() : val(0), left(NULL), right(NULL), next(NULL) {}
11
12    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}
13
14    Node(int _val, Node* _left, Node* _right, Node* _next)
15        : val(_val), left(_left), right(_right), next(_next) {}
16};
17*/
18
19class Solution {
20public:
21    Node* connect(Node* root) 
22    {
23        if (!root) return nullptr; 
24
25        queue<Node*> q; 
26        q.push(root); 
27
28        while (!q.empty()){
29            int size = q.size(); 
30            Node* prev = nullptr; 
31            for (int i=0; i<size; i++){
32                Node* node = q.front(); 
33                q.pop(); 
34
35                if (prev) prev->next = node; 
36                prev = node; 
37
38                if (node->left) q.push(node->left); 
39                if (node->right) q.push(node->right); 
40            }
41
42            if (prev) prev->next = nullptr; 
43        }    
44
45        return root; 
46    }
47};