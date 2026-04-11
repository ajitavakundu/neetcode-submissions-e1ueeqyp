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
    bool hasCycle(ListNode* head) {
        if (nullptr == head || nullptr == head->next)
            return false;

        ListNode *spTmp = head;
        ListNode *fpTmp = head->next;
        bool found = false;

        while (spTmp != nullptr && fpTmp != nullptr && fpTmp->next != nullptr){
            if (spTmp == fpTmp){
                found = true;
                break;
            }

            spTmp = spTmp->next;
            fpTmp = fpTmp->next->next;
        }
        
        return found;

    }
};
