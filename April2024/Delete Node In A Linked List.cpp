void deleteNode(LinkedListNode<int> * node) {
    if(node!=NULL){
       LinkedListNode<int>* temp=node;
       LinkedListNode<int>* Next=node->next;
       LinkedListNode<int>* prev=NULL;
       while(Next!=NULL){
           temp->data=Next->data;
           prev=temp;
           temp=Next;
           Next=Next->next;
       }
       prev->next=Next;
    }
}
