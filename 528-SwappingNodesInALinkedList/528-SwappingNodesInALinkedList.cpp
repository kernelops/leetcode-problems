// Last updated: 6/6/2026, 3:31:54 PM
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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        
        int size=0; 
        ListNode* temp = head; 

        while (temp){
            size++; 
            temp = temp->next; 
        }    

        ListNode* ptr1 = head; ListNode* ptr2 = head; 

        for (int i = 1; i < k; i++) {
            ptr1 = ptr1->next;
        }

        for (int i = 1; i < size - k + 1; i++) {
            ptr2 = ptr2->next;
        }

        swap(ptr1->val, ptr2->val);

        return head; 
    }
};