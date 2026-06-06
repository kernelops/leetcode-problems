// Last updated: 6/6/2026, 3:12:09 PM
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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        unordered_set<int> st(nums.begin(), nums.end()); 

        ListNode* curr = head; 
        ListNode* prev = nullptr; 

        while (curr){
            if (st.find(curr->val) != st.end()){
                if (curr == head){
                    head = head->next; 
                    curr = head; 
                }
                else{
                    prev->next = curr->next; 
                    curr = curr->next; 
                }
            }
            else{
                prev = curr; 
                curr = curr->next; 
            }
        }

        return head; 
    }
};