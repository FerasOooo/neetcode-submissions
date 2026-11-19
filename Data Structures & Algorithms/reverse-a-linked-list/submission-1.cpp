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
        ListNode *prev,*curr,*b3d;
        prev = NULL;
        curr = head;
        b3d = curr->next;
        while (curr!=NULL){
            curr->next = prev;
            prev = curr;
            curr = b3d;
            b3d = curr->next;
        }
        head = prev;
        return head;
    }
};
