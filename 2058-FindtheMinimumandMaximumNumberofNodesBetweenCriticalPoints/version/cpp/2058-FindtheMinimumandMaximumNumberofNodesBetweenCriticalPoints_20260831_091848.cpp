// Last updated: 8/31/2026, 9:18:48 AM
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
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
14    {
15        int size = 0; 
16        ListNode* temp = head; 
17
18        while (temp != nullptr){
19            size++; 
20            temp = temp->next; 
21        }
22
23        if (size < 3) return {-1, -1}; 
24
25        ListNode* curr = head->next; 
26        ListNode* nextt = curr->next; 
27        ListNode* prev = head;
28        
29        int idx=1; vector<int> critical; 
30        while (nextt != nullptr){
31            if ((curr->val > prev->val && curr->val > nextt->val) || 
32            (curr->val < prev->val && curr->val < nextt->val))
33                critical.push_back(idx); 
34
35            nextt = nextt->next; 
36            curr = curr->next; 
37            prev = prev->next; 
38            idx++; 
39        }
40
41        if (critical.size() < 2) return {-1, -1}; 
42
43        int mini = INT_MAX; 
44        for (int i = 1; i < critical.size(); i++) 
45            mini = min(mini, critical[i] - critical[i - 1]); 
46        
47        int maxi = critical.back() - critical.front(); 
48
49        return {mini, maxi}; 
50
51    }
52};