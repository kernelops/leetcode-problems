// Last updated: 8/9/2026, 10:51:56 AM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
14    {
15        if (list1 == NULL) return list2;
16        if (list2 == NULL) return list1;
17        
18        ListNode* ans = NULL; ListNode* temp = ans;  
19        ListNode* cur1 = list1; ListNode* cur2 = list2; 
20
21        while (cur1 != NULL && cur2 != NULL){
22            if (cur1->val <= cur2->val){
23                ListNode* node = new ListNode(cur1->val); 
24                if (!ans){
25                    ans = node; 
26                    temp = ans; 
27                }
28                else{
29                    temp->next = node; 
30                    temp = node; 
31                }
32                cur1 = cur1->next; 
33            }
34            else{
35                ListNode* node = new ListNode(cur2->val); 
36                if (!ans){
37                    ans = node; 
38                    temp = ans; 
39                }
40                else{
41                    temp->next = node; 
42                    temp = node; 
43                }
44                cur2 = cur2->next; 
45            }
46        }
47        while (cur1 != NULL){
48            ListNode* node = new ListNode(cur1->val); 
49            temp->next = node; 
50            temp = node; 
51            cur1 = cur1->next; 
52        }
53
54        while (cur2 != NULL){
55            ListNode* node = new ListNode(cur2->val); 
56            temp->next = node; 
57            temp = node; 
58            cur2 = cur2->next; 
59        }
60
61        return ans; 
62    }
63};