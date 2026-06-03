// Last updated: 6/3/2026, 11:32:59 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mpp; 
        Node* cur = head;
        while (cur != NULL){
            mpp[cur] = new Node(cur->val); 
            cur = cur->next;
        }      

        cur = head; 
        while (cur != NULL){
            mpp[cur]->next = mpp[cur->next]; 
            mpp[cur]->random = mpp[cur->random]; 
            cur = cur->next;
        }

        return mpp[head]; 
    }
};