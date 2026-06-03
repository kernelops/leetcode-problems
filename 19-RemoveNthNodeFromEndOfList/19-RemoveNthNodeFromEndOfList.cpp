// Last updated: 6/3/2026, 11:34:41 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len=0; 
        ListNode* cur = head; 
        while (cur != NULL){
            len++; 
            cur = cur->next; 
        }    

        int front = len-n; 
        if (front == 0){
            cur = head;
            head = head->next; 
            delete cur; 
            return head;
        }
        ListNode* prev = NULL; cur = head; int count=0; 
        while (count < front){
            prev = cur; 
            cur = cur->next; 
            count++; 
        }

        prev->next = cur->next; delete cur; 
        return head;
    }
};