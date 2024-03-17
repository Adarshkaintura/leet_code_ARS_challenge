/*Given two linked list head1 and head2 with distinct elements, determine the count of all distinct pairs from both lists whose sum is equal to the given value x.

Note: A valid pair would be in the form (x, y) where x is from first linked list and y is from second linked list. */
int countPairs(struct Node* head1, struct Node* head2, int x) {
       vector<int> h2;
       
       Node* temp=head2;
       while(temp!=NULL){
            h2.push_back(temp->data);
            temp=temp->next;
       }
       vector<int> h1;
       
       temp=head1;
       while(temp!=NULL){
            h1.push_back(temp->data);
            temp=temp->next;
       }
       sort(h2.begin(),h2.end());
       reverse(h2.begin(),h2.end());
        sort(h1.begin(),h1.end());
       int i=0,j=0;
       int count=0;
       while(i<h1.size() && j<h2.size()){
           int a=h1[i]+h2[j];
           if(a==x){
               count++;
               i++;
               j++;
           }else if(a>x){
               j++;
           }else{
               i++;
           }
       }
       return count;
    }
