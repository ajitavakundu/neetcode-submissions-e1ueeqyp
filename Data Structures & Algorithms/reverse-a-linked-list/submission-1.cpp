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
    ListNode* reverseList(ListNode* head) {
        if (NULL == head || NULL == head->next)
            return head;
        
        ListNode *currHead = reverseList(head->next);

        ListNode *tmp = head->next;
        tmp->next = head;
        head->next = NULL;
        
        return currHead;
    }
};
