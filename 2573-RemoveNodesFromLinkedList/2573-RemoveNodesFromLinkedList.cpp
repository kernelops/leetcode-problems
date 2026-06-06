// Last updated: 6/6/2026, 12:23:07 PM
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
    void insert(ListNode* &head, int &val){
        ListNode* node = new ListNode(val); 
        node->next = head; 
        head = node; 
    }

    ListNode* removeNodes(ListNode* head) 
    {
        if (!head) return nullptr; 

        ListNode* ptr = head; 
        stack<int> st; 

        while (ptr != nullptr){
            if (st.empty()){
                st.push(ptr->val); 
                ptr = ptr->next; 
                continue;
            }

            while (!st.empty() && ptr->val > st.top()) 
                st.pop(); 
            
            st.push(ptr->val); 
            ptr = ptr->next; 
        }       

        ListNode* ans = nullptr; 
        
        while(!st.empty()){
            insert(ans, st.top()); 
            st.pop(); 
        }

        return ans; 
    }
};