// Last updated: 6/7/2026, 12:33:45 AM
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
    void rev(ListNode* &head, ListNode* &ans){
        while (head){
            ListNode* node = new ListNode(head->val); 

            if (!ans) ans = node; 
            else{
                node->next = ans; 
                ans = node; 
            }

            head = head->next; 
        }
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* rl1 = nullptr; 
        ListNode* rl2 = nullptr; 

        rev(l1, rl1); rev(l2, rl2); 

        ListNode* ans = nullptr; int carry=0; 
        while (rl1 || rl2 || carry)
        {
            int x = rl1 ? rl1->val : 0;
            int y = rl2 ? rl2->val : 0;

            int sum = x + y + carry;
            int digit = sum % 10;
            carry = sum / 10;

            ListNode* node = new ListNode(digit);
            node->next = ans;
            ans = node;

            if (rl1) rl1 = rl1->next;
            if (rl2) rl2 = rl2->next;
        }

        return ans; 
    }
};