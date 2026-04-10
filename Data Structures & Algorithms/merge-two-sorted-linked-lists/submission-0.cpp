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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (NULL == list1)
            return list2;
        
        if (NULL == list2)
            return list1;

        ListNode *nLLHead = new ListNode(-1);
        ListNode *tmp  = nLLHead;
        ListNode *tmp1 = list1;
        ListNode *tmp2 = list2;

        while (tmp1 != NULL && tmp2 != NULL){
            if(tmp1->val <= tmp2->val) {
                tmp->next = tmp1;
                tmp1 = tmp1->next;
            }
            else {
                tmp->next = tmp2;
                tmp2 = tmp2->next;
            }

            tmp = tmp->next;
        }

        if (tmp1 == nullptr){
            tmp->next = tmp2;
        }

        if (tmp2 == nullptr) {
            tmp->next = tmp1;
        }

        return nLLHead->next;

    }
};
