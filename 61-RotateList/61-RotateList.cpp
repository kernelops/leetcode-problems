// Last updated: 6/3/2026, 11:33:55 PM
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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        ListNode* temp = head; int size=0;
        if (!head || !head->next || k == 0) return head;
        while (temp != NULL) 
        {
            size++;
            temp = temp->next;
        }   
        int shift = k%size;
        if (shift == 0) return head;
        int front = size-shift-1;
        ListNode* curr = head;
        for (int i=0; i<front; i++)
        {
            curr = curr->next;
        }
        ListNode* end = curr;
        while (end->next != NULL)
            end = end->next;
        end->next = head;
        ListNode* newHead = curr->next;
        curr->next = NULL;
        return newHead;
    }
};