// Last updated: 6/3/2026, 11:34:34 PM
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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        vector<int> nums; 
        ListNode *temp;

        for (int i = 0; i < lists.size(); i++)
        {
            temp = lists[i];
            while (temp != NULL)   
            {
                nums.push_back(temp->val);  
                temp = temp->next;
            }
        }

        sort(nums.begin(), nums.end());

        // Build the new sorted linked list
        ListNode *head = nullptr;
        ListNode *tail = nullptr;

        for (int i : nums)
        {
            ListNode *newNode = new ListNode(i);
            if (!head)
            {
                head = newNode;
                tail = newNode;
            }
            else
            {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return head;
    }
};
