// Last updated: 6/7/2026, 12:08:31 AM
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
    int pairSum(ListNode* head) 
    {
        ListNode* rev = nullptr; 
        ListNode* temp = head; 

        while (temp != nullptr){
            ListNode* node = new ListNode(temp->val); 
            if (rev == nullptr) rev = node; 
            else{
                node->next = rev; 
                rev = node; 
            }

            temp = temp->next; 
        }

        int maxi=0; 
        ListNode* ptr1 = head; 
        ListNode* ptr2 = rev; 

        while (ptr1 && ptr2){
            maxi = max(maxi, ptr1->val + ptr2->val); 

            ptr1 = ptr1->next; 
            ptr2 = ptr2->next; 
        } 

        return maxi; 
    }
};