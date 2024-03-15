#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Node{
     public:
     int data;
     Node* next;
     Node(int val){
        this->data=val;
        this->next=nullptr;
     }
    
};
void insert(Node*& head,int data){
        Node* newnode=new Node(data);
        if(head==nullptr){ 
            head=newnode;
        }else{
           Node* temp=head;
           while(temp->next!=nullptr){
            temp=temp->next;
           }
           temp->next=newnode;
        }
     }
void display(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}
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

int main() {
    Node* head = nullptr;
    insert(head, 8);
    insert(head, 3);
    insert(head, 7);
    insert(head, 1);
    insert(head, 9);
    insert(head, 2);
    insert(head, 3);
    insert(head, 6);
    
    cout << "Original List: ";
    display(head);



    head=mergesort(head);

    cout << "Sorted List: ";
    display(head);

    return 0;
}

