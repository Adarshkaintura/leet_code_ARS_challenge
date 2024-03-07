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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr){
            return head;
        }else{
            ListNode* temp=head;
            int len=0;
            while(temp!=nullptr){
                temp=temp->next;
                len++;
            }
            int i=0;
            temp=head;
            while(i<len/2){
            temp=temp->next;
            i++;
            }
            return temp;
        }
        
    }
};

//other approach can be used is slow and fast pointer
