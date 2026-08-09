// Last updated: 8/9/2026, 10:34:16 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* reverseList(ListNode* head) 
14    {
15        stack<int> st; 
16        struct ListNode* cur = head;
17        while (cur != NULL){
18            st.push(cur->val); 
19            cur = cur->next; 
20        }     
21
22        cur = head; 
23        while (cur != NULL){
24            cur->val = st.top(); 
25            st.pop(); 
26            cur = cur->next;
27        }
28
29        return head; 
30    }
31};