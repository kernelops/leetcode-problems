// Last updated: 6/3/2026, 11:31:48 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
typedef struct ListNode *NODE;
class Solution {
public:
    void deleteNode(ListNode* node) 
    {
        NODE temp = node, prev = NULL;
        while (temp->next != NULL)
        {
            temp->val = temp->next->val;
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        delete temp;
    }
};