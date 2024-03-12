//you know how to solve it just one things is not clear inside while loop dry run by your own 
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
    ListNode* removeZeroSumSublists(ListNode* head) {

        int len = 0;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            temp = temp->next;
            len++;
        }
        
       int prefsum=0;
       ListNode* dummyNode=new ListNode(0);
       unordered_map<int,ListNode*> mp;
       mp[0]=dummyNode;
       dummyNode->next=head;
       while(head!=nullptr){
       prefsum+=head->val;
       if(mp.find(prefsum)!=mp.end()){
          ListNode* start=mp[prefsum];
          ListNode* temp=start;

          int pSum=prefsum;
          while(temp!=head){
            temp=temp->next;
            pSum+=temp->val;
            if(temp!=head){
                mp.erase(pSum);
            }
            start->next=head->next;
          }

        }else{
            mp[prefsum]=head;
        }
       head=head->next;
       }
        return dummyNode->next;
    }
};
