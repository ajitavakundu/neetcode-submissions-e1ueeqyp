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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (nullptr == head || 0 == n)
            return head;

        if (nullptr == head->next && 1 == n) {
            delete head;
            return nullptr;
        }

        ListNode *tmp = head;
        int countNode = 0;
        while (nullptr != tmp) {
            countNode++;
            tmp = tmp->next;
        }

        int count = 1;
        tmp = head;
        ListNode *prev = nullptr;
        while (nullptr != tmp) {
            if (count == (countNode - n + 1)) {
                if (tmp == head) 
                    head = head->next;
                else
                    prev->next = tmp->next;
                delete tmp;
                break;
            }
            prev = tmp;
            tmp = tmp->next;
            count++;
        }  

        return head;            
    }
};
