// Last updated: 6/3/2026, 11:31:27 PM
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
    ListNode* oddEvenList(ListNode* head) 
    {
        vector<int> list;
        NODE temp = head;
        if (!head) return head;
        while (temp != NULL)
        {
            list.push_back(temp->val);
            if (temp->next == NULL) break;
            temp = temp->next->next;
        }
        temp = head->next;
        while (temp != NULL)
        {
            list.push_back(temp->val);
            if (temp->next == NULL) break;
            temp = temp->next->next;            
        }
        temp = head;
        for (int i=0; i<list.size(); i++)
        {
            temp->val = list[i];
            temp = temp->next;
        }
        return head;
    }
};