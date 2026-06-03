// Last updated: 6/3/2026, 11:29:27 PM
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
typedef struct ListNode *NODE;
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if (head == NULL || head->next == NULL){
            //delete head;
            return NULL;
        }
        
        NODE temp = head; int count=0;
        while (temp != NULL){
            count++;
            temp = temp->next;
        }    

        int pos = count/2 + 1;
        
        NODE curr=head;
        NODE prev=NULL;
        for (int i=1; i<pos; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //delete curr; curr = nullptr;
        return head;  
    }
};