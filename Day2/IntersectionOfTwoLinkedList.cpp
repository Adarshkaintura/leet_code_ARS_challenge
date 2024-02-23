/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
      int getlen(ListNode* headA){
          if(headA!=NULL){
              int len=0;
              while(headA!=NULL){
                  headA=headA->next;
                  len++;
              }
              return len;
          }
          return 0;
      }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         int l1 = getlen(headA);
    int l2 = getlen(headB);
    int diff = abs(l1 - l2);
    
    
    for (int i = 0; i < diff; ++i) {
        if (l1 > l2) {
            headA = headA->next;
        } else {
            headB = headB->next;
        }
    }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};
