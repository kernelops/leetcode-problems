// Last updated: 8/9/2026, 11:30:29 AM
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
13    bool isPalindrome(ListNode* head) 
14    {
15        stack<int> st; 
16
17        ListNode* node = head; 
18        while (node){
19            st.push(node->val); 
20            node = node->next; 
21        }    
22
23        node = head; 
24        while (node){
25            if (node->val != st.top()) return false; 
26            if (!st.empty()) st.pop(); 
27            node = node->next; 
28        }
29
30        return true; 
31    }
32};