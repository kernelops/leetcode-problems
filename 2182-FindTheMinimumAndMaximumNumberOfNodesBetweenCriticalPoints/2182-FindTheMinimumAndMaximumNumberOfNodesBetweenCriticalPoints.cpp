// Last updated: 6/6/2026, 11:24:21 AM
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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        int size = 0; 
        ListNode* temp = head; 

        while (temp != nullptr){
            size++; 
            temp = temp->next; 
        }

        if (size < 3) return {-1, -1}; 

        ListNode* curr = head->next; 
        ListNode* nextt = curr->next; 
        ListNode* prev = head;
        
        int idx=1; vector<int> critical; 
        while (nextt != nullptr){
            if ((curr->val > prev->val && curr->val > nextt->val) || 
            (curr->val < prev->val && curr->val < nextt->val))
                critical.push_back(idx); 

            nextt = nextt->next; 
            curr = curr->next; 
            prev = prev->next; 
            idx++; 
        }

        if (critical.size() < 2) return {-1, -1}; 

        int mini = INT_MAX; 
        for (int i = 1; i < critical.size(); i++) 
            mini = min(mini, critical[i] - critical[i - 1]); 
        
        int maxi = critical.back() - critical.front(); 

        return {mini, maxi}; 

    }
};