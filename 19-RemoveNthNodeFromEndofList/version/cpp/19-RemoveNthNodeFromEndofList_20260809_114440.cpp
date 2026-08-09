// Last updated: 8/9/2026, 11:44:40 AM
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
13    ListNode* removeNthFromEnd(ListNode* head, int n) 
14    {
15        int len=0; 
16        ListNode* cur = head; 
17        while (cur){
18            len++; 
19            cur = cur->next; 
20        }  
21
22        // Remove head
23        if (n == len) {
24            ListNode* temp = head;
25            head = head->next;
26            delete temp;
27            return head;
28        }  
29
30        cur = head; 
31        ListNode* prev = NULL;
32        for (int i=0; i<(len-n); i++){
33            prev = cur; 
34            cur = cur->next; 
35        }
36
37        prev->next = cur->next; 
38        delete cur; 
39
40        return head; 
41    }
42};