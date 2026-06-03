// Last updated: 6/3/2026, 11:30:20 PM
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
    ListNode* middleNode(ListNode* head) 
    {
        int len=1;
        NODE curr = head;  
        while (curr->next != 0)
        {
            len++;
            curr = curr->next;
        }  
        int mid = len/2;
        curr = head;
        for (int i=0; i<mid; i++)
        {
            curr = curr->next;
        }
        return curr;
    }
};