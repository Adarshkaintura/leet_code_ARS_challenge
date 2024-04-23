void merge(Node* head1, Node* head2)
{
    if(head1!=NULL&& head2!=NULL){
   
    Node* l1=head1;
    Node* l2=head2;
    Node* t1=NULL;
    Node* t2=NULL;
    while(l1!=NULL && l2!=NULL){
       t1=l1->next;
       l1->next=l2;
       l1=t1;
     t2=l2->next;
       l2->next=t1;
       l2=t2;
    }
   
    }
}
