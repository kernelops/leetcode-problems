// Last updated: 6/3/2026, 11:32:40 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_map<ListNode*, int> count;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while (tempA != NULL)
        {
            count[tempA]++;
            tempA = tempA->next;
        }    
        while (tempB != NULL)
        {
            if (count.find(tempB) != count.end()) return tempB;
            count[tempB]++;
            tempB = tempB->next;
        }
        return NULL;
    }
};