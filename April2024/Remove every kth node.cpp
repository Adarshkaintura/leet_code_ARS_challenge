class Solution {
    void deletenode(Node *head){
        if(head!=NULL && head->next!=NULL){
            Node* temp=head->next;
            head->data=temp->data;
            head->next=temp->next;
        }
        
    }
    public:
    Node* deleteK(Node *head,int K){
     if(head==NULL|| K==1){
         return NULL;
     }
      else{
         Node* temp=head;
         int i=1;
         Node* prev=NULL;
         while(temp!=NULL){
              if(i%K==0){
                  if(temp->next==NULL){
                      prev->next=NULL;
                      break;
                  }
                  deletenode(temp);
              }else{
                  prev=temp;
                   temp=temp->next;
              }
             
              i++;
         }
     }
     return head;
    }
};
