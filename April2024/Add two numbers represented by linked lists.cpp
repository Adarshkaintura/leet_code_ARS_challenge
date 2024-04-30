 Node* reverseLinkedList(Node* head) {
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;  // Store the next node
            curr->next = prev;  // Reverse the pointer
            prev = curr;        // Move pointers one position ahead
            curr = next;
        }

        // At the end, prev will point to the new head of the reversed list
        return prev;
    }

    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
        if (num1 == nullptr) {
            return num2;
        }
        if (num2 == nullptr) {
            return num1;
        }
        Solution sol;
        while(num1->next && num1->data==0){
            num1=num1->next;
        }
        while(num2->next && num2->data==0){
            num2=num2->next;
        }
        num1 = sol.reverseLinkedList(num1);
        num2 = sol.reverseLinkedList(num2);
        int carry = 0;
        int sum = 0;
        Node* temp = nullptr;
        Node* head = nullptr;
        while (num1 != nullptr || num2 != nullptr || carry != 0) {
            sum = carry;
            if (num1 != nullptr) {
                sum += num1->data;
                num1 = num1->next;
            }
            if (num2 != nullptr) {
                sum += num2->data;
                num2 = num2->next;
            }
            carry = sum / 10;
            sum %= 10;
            Node* newnode = new Node(sum);
            if (head == nullptr) {
                head = newnode;
                temp = head;
            } else {
                temp->next = newnode;
                temp = newnode;
            }
        }
        head = sol.reverseLinkedList(head);
        return head;
    }
