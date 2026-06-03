// Last updated: 6/3/2026, 11:31:53 PM
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
    bool isPalindrome(ListNode* head) 
    {
        stack<int> st; 
        queue<int> q; 
        ListNode* temp = head; 
        while (temp != NULL){
            st.push(temp->val); 
            q.push(temp->val); 
            temp = temp->next;
        }    

        while (!st.empty()){
            if (st.top() != q.front()) return false; 
            st.pop(); 
            q.pop(); 
        }

        return true; 
    }
};