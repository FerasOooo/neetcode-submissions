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
        ListNode *bef = head;
        ListNode *aft = head;
            while(aft!=nullptr&&aft->next!=nullptr)
            {
                aft = aft->next->next;
                bef = bef->next;
                if(aft==bef){
                    return true;
                }
            }return false;
          

        }
    
};
