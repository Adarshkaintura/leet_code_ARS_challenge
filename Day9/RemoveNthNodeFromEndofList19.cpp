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
        if(head==nullptr){
            return head;
        }else{
                ListNode* temp=head;
                ListNode* del=nullptr;
                ListNode* prev=nullptr;
                int len=0;
                while(temp!=nullptr){
                    temp=temp->next;
                    len++;
                }
                if(len==1 && n==1){
                    head=nullptr;
                    return head;
                }
                int l=len-n;
                temp=head;
                int i=0;
                if(l==0){
                    head=head->next;
                    return head;
                }
                while(temp!=nullptr && i<l){
                    prev=temp;
                    temp=temp->next;
                    i++;
                }
                del=temp;
                prev->next=temp->next;
                 delete del;
        }
        return head;
    }
};
