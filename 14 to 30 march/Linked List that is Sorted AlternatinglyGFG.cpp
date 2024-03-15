/* what i  did was nothing i just put merge sort code in it it automaticaly sort them in n time complexity */
class Solution
{
    public:
    // your task is to complete this function
    Node* findmid(Node* start) {
    Node* slow = start;
    Node* fast = start->next; // Fast pointer moves twice as fast as the slow pointer
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
      
    }
    return slow;
}


Node* merge(Node* left,Node* right) {
    if(left==nullptr){
        return right;
    }
    if(right==nullptr){
        return left;
    }
   Node* dummy=new Node(-1);
   Node* current=dummy;
   while(left!=nullptr && right!=nullptr){
    if(left->data > right->data){
        current->next=right;
        current=right;
        right=right->next;
    }else{
        current->next=left;
        current=left;
        left=left->next;
    }
   }
   while(left!=nullptr){
    current->next=left;
    current=left;
    left=left->next;
   }
   while(right!=nullptr){
    current->next=right;
    current=right;
    right=right->next;
   }
return dummy->next;
}


Node* mergesort(Node* head) {
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* mid=findmid(head);
     Node* left=head;
     Node* right=mid->next;
     mid->next=nullptr;
     
     left=mergesort(left);
     right=mergesort(right);
     Node* result=merge(left,right);
     return result;
     
}
    void sort(Node **head) {
    if (*head == nullptr || (*head)->next == nullptr)
        return;
     *head=mergesort(*head);
}
