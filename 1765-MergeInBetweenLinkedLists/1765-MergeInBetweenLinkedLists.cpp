// Last updated: 6/3/2026, 11:49:44 PM
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* ptr1 = list1; 
        for (int i=0; i<a-1; i++)
            ptr1 = ptr1->next; 

        ListNode* ptr2 = ptr1->next; 
        ptr1->next = list2;    

        for (int i=0; i<b-a; i++)
            ptr2 = ptr2->next; 

        ListNode* ptr3 = ptr2->next; 

        ListNode* curr = list2; 
        while (curr->next != NULL) curr = curr->next; 

        curr->next = ptr3; 

        return list1; 
    }
};