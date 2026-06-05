// Last updated: 6/5/2026, 10:57:21 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void addNode(ListNode* &head, ListNode* &tail, int val){
        ListNode* node = new ListNode(val); 
        
        if (!head){
            head = tail = node; 
            return;
        }

        tail->next = node;
        tail = node;
    }
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* curr = head->next; 
        ListNode* ans = nullptr; 
        ListNode* tail = nullptr;
        int sum=0; 

        while (curr != nullptr){
            if (curr->val == 0){
                if (sum != 0){
                    addNode(ans, tail, sum); 
                    sum=0; 
                } 
            }
            else sum += curr->val;
            curr = curr->next;
        }

        return ans; 
    }
};