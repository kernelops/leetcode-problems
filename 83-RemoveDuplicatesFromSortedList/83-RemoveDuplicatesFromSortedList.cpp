// Last updated: 6/3/2026, 11:33:38 PM
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

typedef struct ListNode *NODE;
class Solution {
public:
    NODE deleteDuplicates(NODE head) 
    {
        if (head == NULL)
            return NULL;

        NODE cur = head;
        while (cur != NULL)
        {
            int value = cur->val;
            NODE temp = cur;
            while (temp != NULL)
            {
                if (temp->next)
                {
                    if (value == temp->next->val)
                    {
                        NODE del = temp->next;
                        temp->next = temp->next->next;
                        delete del;
                    }
                    else temp = temp->next;
                }
                else break;
            }
            if (cur != NULL) cur = cur->next;
        }
        return head;    
    }
};