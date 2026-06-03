// Last updated: 6/3/2026, 11:32:48 PM
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
    int partition(vector<int>& arr, int low, int high) {
        int randIdx = low + rand() % (high - low + 1);
        swap(arr[randIdx], arr[high]);
        
        int pivot = arr[high];   // last element as pivot
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);  // place pivot in correct position
        return i + 1;
    }

    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);   // sort left of pivot
            quickSort(arr, pi + 1, high);  // sort right of pivot
        }
    }
    ListNode* sortList(ListNode* head) 
    {
        ListNode* temp = head;
        vector<int> vals;
        while (temp != NULL){
            vals.push_back(temp->val);   
            temp = temp->next;
        } 
        quickSort(vals, 0, vals.size()-1);
        temp = head; int i=0;
        while (temp != NULL)
        {
            temp->val = vals[i]; 
            i++;
            temp = temp->next;
        }
        return head;
    }
};