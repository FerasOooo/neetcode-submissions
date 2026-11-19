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
        ListNode *temp = head;
        ListNode *curr = head;
        int count = 0;
        int ind = -1;
        for(ListNode *s = head;s!=nullptr;s=s->next){
            count++;
        }
        ind = count - n;
        if(ind==0&&count== 1){
            delete head;
            return 0;
        }
        else if(ind==0&&count>1){
            head = head->next;
            delete temp;
            return head;
        }
         else if(ind>=0){
            for(int i = 0; i<ind-1;i++){
                temp = temp->next;
            }
            curr = temp;
            temp = temp->next;
            curr->next = temp->next;
            delete temp;
        }
    return head;
    }
};
