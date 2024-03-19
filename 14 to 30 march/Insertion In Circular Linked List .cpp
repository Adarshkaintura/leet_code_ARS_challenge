/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 *		Node() : data(0), next(nullptr){};
 *		Node(int x) : data(x), next(nullptr){};
 *		Node(int x, Node *next) : data(x), next(next){};
 * };
 */

Node* insert(int k, int val, Node *head) {
	Node* newnode=new Node(val);
	if(head==nullptr || k==0){
		if(head==nullptr){
		newnode->next=newnode;
		head=newnode;
	
		}
		else{
             Node* last=head;
			 while(last->next!=head){
				 last=last->next;
			 }
			 newnode->next=head;
			 last->next=newnode;
			 head=newnode;
	
		}
           	return head;
	}else{

		Node* temp=head;
		for(int i=0;i<k-1;i++){
			temp=temp->next;
                        if (temp->next == head) {
                                 temp->next = newnode;
                                 newnode->next = head;
                                 return head;
                        }
                }
                newnode->next = temp->next;
                temp->next = newnode;
               
        }
		 return head;
}
