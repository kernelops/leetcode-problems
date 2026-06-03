// Last updated: 6/3/2026, 11:34:50 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode *NODE;
NODE removeNthFromEnd(NODE start, int n) 
{
    NODE cur; int length = 0; cur = start;
    if (start == NULL || n<0)
        return start;
    while (cur != NULL)
    { 
        length++;
        cur = cur->next;   
    }

    if (n>length)
        return start;
    int pos = length - n;

    if (pos == 0)
    {
        NODE temp = start->next;
        free(start);
        return temp;
    }

    cur = start;
    NODE prev = NULL;
    int count = 0;
    while (count != pos)
    {
        prev = cur;
        cur = cur->next;
        count++;
    }
    prev->next = cur->next;
    free(cur);
    return start;
}