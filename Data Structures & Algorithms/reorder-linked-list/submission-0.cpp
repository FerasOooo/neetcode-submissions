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
    void reorderList(ListNode* head) {
      ListNode *head2 = head;
      int count = 0;
      for(ListNode*curr = head;curr!=nullptr;curr = curr->next){
        count++;
      }
      if(count<=1){
        return ;
      }else{
        ListNode* prevHalf = nullptr;
      for(int i = 0;i<count/2;i++){
        prevHalf = head2;
        head2 = head2->next;
      }
      prevHalf->next=nullptr;
      ListNode*prev = nullptr;
      ListNode *curr2 = head2;
      ListNode *ne = curr2->next;
      while(curr2!=nullptr){
        curr2->next = prev;
        prev = curr2;
        curr2= ne;
        ne=ne->next;
      }
      ListNode *curr1 = head;
      curr2 = prev;
      while(curr1!=nullptr&&curr2!=nullptr){
        ListNode* next1 = curr1->next;
            ListNode* next2 = curr2->next;

            curr1->next = curr2;
            if(next1 == nullptr) break; 
            curr2->next = next1;
            curr1 = next1;
            curr2 = next2;

      }
      }


    }
};
