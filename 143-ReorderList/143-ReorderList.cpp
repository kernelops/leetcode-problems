// Last updated: 6/3/2026, 11:32:55 PM
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
    void reorderList(ListNode* head) 
    {
        if (head == NULL || head->next == NULL) return;

        ListNode* rev = NULL; 
        stack<int> st; 

        ListNode* cur = head; int count=0; 
        while (cur != NULL){
            st.push(cur->val); 
            cur = cur->next;
            count++; 
        }    

        while (!st.empty()){
            ListNode* node = new ListNode(st.top()); st.pop(); 
            if (rev == NULL) {rev = node; continue;}

            cur = rev;
            while (cur->next != NULL) cur = cur->next;
            cur->next = node; 
        }

        ListNode* ans = NULL; 
        ListNode* cur1 = head; ListNode* cur2 = rev;  int cnt=0;
        while (cur1->next != NULL && cnt < (count/2)){
            cnt++; 
            ListNode* node1 = new ListNode(cur1->val); 
            ListNode* node2 = new ListNode(cur2->val); 
            node1->next = node2; 
            if (ans == NULL) {ans = node1; cur1 = cur1->next; cur2 = cur2->next; continue;}
            cur = ans; 
            while (cur->next != NULL) cur = cur->next; 
            cur->next = node1;

            cur1 = cur1->next; 
            cur2 = cur2->next;  
        }

        if (count%2 != 0){
            ListNode* nodef = new ListNode(cur1->val); 
            cur = ans; 
            while (cur->next != NULL) cur = cur->next; 
            cur->next = nodef;
        }
        cur = ans;

        while (cur->next != NULL)
            cur = cur->next;

        cur->next = NULL;

        ListNode* temp = head;
        while (temp!=NULL && ans!=NULL){
            temp->val = ans->val; 
            temp = temp->next; ans = ans->next; 
        }
    }
};