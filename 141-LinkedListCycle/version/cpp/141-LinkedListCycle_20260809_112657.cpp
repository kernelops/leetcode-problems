// Last updated: 8/9/2026, 11:26:57 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    bool hasCycle(ListNode *head) 
12    {
13        ListNode* slow = head; ListNode* fast = head; 
14        while (fast != NULL && fast->next != NULL){
15            fast = fast->next->next; 
16            slow = slow->next; 
17            if (fast == slow) return true; 
18        }
19
20        return false;
21    }
22};