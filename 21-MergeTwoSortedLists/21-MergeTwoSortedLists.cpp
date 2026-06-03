// Last updated: 6/3/2026, 11:34:37 PM
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
    void add(ListNode* &head, int val){
        ListNode* temp = new ListNode(val); 
        if (!head) {head = temp; return;}
        ListNode* cur = head; 
        while (cur->next != NULL) cur = cur->next; 
        cur->next = temp; 
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* final = NULL;
        if (list1 == NULL && list2 != NULL) return list2;
        if (list1 != NULL && list2 == NULL) return list1;
        if (list1 == NULL && list2 == NULL) return NULL; 

        while (list1 != NULL && list2 != NULL){
            if (list1->val < list2->val){
                add(final, list1->val);
                list1 = list1->next; 
            }
            else{
                add(final, list2->val);
                list2 = list2->next;
            } 
        }

        while (list1 != NULL)
        {
            add(final, list1->val); 
            list1 = list1->next;
        } 

        while (list2 != NULL){
            add(final, list2->val); 
            list2 = list2->next;            
        }

        return final; 
    }
};