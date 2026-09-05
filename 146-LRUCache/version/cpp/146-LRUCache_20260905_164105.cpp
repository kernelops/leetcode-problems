// Last updated: 9/5/2026, 4:41:05 PM
1class LRUCache {
2public:
3    class Node {
4    public: 
5        int key; 
6        int val;
7        Node* prev; 
8        Node* next; 
9
10        Node (int key, int val) {
11            this->key = key; 
12            this->val = val; 
13            prev = nullptr;
14            next = nullptr; 
15        }
16    }; 
17
18    Node* head = new Node(-1, -1); 
19    Node* tail = new Node(-1, -1); 
20    
21    int cap; 
22    unordered_map<int, Node*> mpp; 
23
24    LRUCache(int capacity) {
25        cap = capacity; 
26        mpp.clear(); 
27        head->next = tail; 
28        tail->prev = head; 
29    }
30
31    void deleteNode(Node* node) {
32        Node* prevNode = node->prev; 
33        Node* afterNode = node->next; 
34        prevNode->next = afterNode; 
35        afterNode->prev = prevNode; 
36    }
37
38    void insertAfterHead(Node* node) {
39        Node* curAfterNode = head->next; 
40        head->next = node; 
41        node->next = curAfterNode; 
42        node->prev = head; 
43        curAfterNode->prev = node; 
44    }
45    
46    int get(int key) {
47        if (mpp.find (key) != mpp.end()) {
48            Node* node = mpp[key]; 
49            deleteNode(node); 
50            insertAfterHead(node); 
51
52            return node->val; 
53        }
54        return -1;
55    }
56    
57    void put(int key, int value) {
58        if (mpp.find(key) != mpp.end()) {
59            Node* node = mpp[key]; 
60            node->val = value; 
61            deleteNode(node); 
62            insertAfterHead(node); 
63        }
64        else {
65            if (mpp.size() == cap) {
66                Node* node = tail->prev; 
67                mpp.erase(node->key); 
68                deleteNode(node); 
69            }
70
71            Node* node = new Node(key, value); 
72            mpp[key] = node; 
73            insertAfterHead(node); 
74        }
75    }
76};
77
78/**
79 * Your LRUCache object will be instantiated and called as such:
80 * LRUCache* obj = new LRUCache(capacity);
81 * int param_1 = obj->get(key);
82 * obj->put(key,value);
83 */