// Last updated: 8/9/2026, 12:09:55 PM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
14    {
15        int carry=0; 
16        ListNode* ans = NULL; 
17        ListNode* ptr = ans; 
18        while (l1 || l2 || carry){
19            int sum=carry; 
20            if (l1) sum += l1->val; 
21            if (l2) sum += l2->val; 
22
23            if (sum > 9){
24                carry = sum / 10; 
25                sum = sum%10; 
26            }
27            else carry=0; 
28            
29            ListNode* temp = new ListNode(sum);
30            if (!ans){
31                ans = temp; 
32                ptr = ans; 
33            }
34            else{
35                ptr->next = temp; 
36                ptr = temp; 
37            }
38
39            if (l1) l1 = l1->next; 
40            if (l2) l2 = l2->next; 
41        } 
42
43        return ans;    
44    }
45};