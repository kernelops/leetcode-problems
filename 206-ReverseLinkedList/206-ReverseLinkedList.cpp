// Last updated: 6/3/2026, 11:32:18 PM
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
    ListNode* reverseList(ListNode* head) 
    {
        stack<int> st; 
        ListNode* cur=head; 
        while (cur != NULL){
            st.push(cur->val); 
            cur = cur->next;
        }    

        cur = head;
        while (cur != NULL){
            int v = st.top(); st.pop(); 
            cur->val = v;
            cur = cur->next;
        }

        return head;
    }
};