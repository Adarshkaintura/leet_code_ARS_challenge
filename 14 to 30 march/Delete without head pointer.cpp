 void deleteNode(Node *del_node)
    {
       Node* temp=del_node;
       Node* prev=NULL;
       while(temp->next!=NULL){
           temp->data=temp->next->data;
           prev=temp;
           temp=temp->next;
       }
       prev->next=NULL;
    }
