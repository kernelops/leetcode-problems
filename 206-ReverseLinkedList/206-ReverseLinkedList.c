// Last updated: 6/3/2026, 11:32:25 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) 
{
    struct ListNode *cur = head, *prev = NULL, *temp = NULL;
    while (cur != NULL)
    {
        temp = prev;
        prev = cur;
        cur = cur->next;
        prev->next = temp;
    }
    return prev;
}