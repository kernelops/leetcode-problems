// Last updated: 6/18/2026, 10:26:53 PM
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
23        vector<vector<Node*>> levels; 
24        if (!root) return nullptr;
25
26        queue<Node*> q; 
27        q.push(root); 
28
29        while (!q.empty()){
30            int size = q.size(); 
31            vector<Node*> level; 
32            for (int i=0; i<size; i++){
33                Node* node = q.front(); 
34                q.pop(); 
35                if (node->left) q.push(node->left); 
36                if (node->right) q.push(node->right); 
37                level.push_back(node);
38            }
39            levels.push_back(level); 
40        }    
41
42        for (auto &i: levels)
43        {
44            for (int j=0; j<i.size(); j++){
45                if (j == i.size()-1) i[j]->next = nullptr; 
46                else i[j]->next = i[j+1]; 
47            }
48        }
49
50        return root; 
51    }
52};