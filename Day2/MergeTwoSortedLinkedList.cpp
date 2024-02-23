class Solution {
public:
    ListNode* mergeTwoLists(ListNode* p1, ListNode* p2) {
        ListNode* merge=new ListNode(0);
        ListNode* temp=merge;
        while(p1!=nullptr && p2!=nullptr){
            if(p1->val<=p2->val){
               temp->next=p1;
                p1=p1->next;
            }else{
             temp->next=p2;
                p2=p2->next;
            }
            temp=temp->next;
        }
        if(p1!=nullptr){
            temp->next=p1;
        }
         else if(p2!=nullptr){
            temp->next=p2;
        }
return merge->next;
    }
};
