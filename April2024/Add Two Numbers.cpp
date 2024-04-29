Node* addTwoNumbers(Node* num1, Node* num2) {
    if (num1 == NULL) {
        return num2;
    }
    if (num2 == NULL) {
        return num1;
    }
    
    Node* ans = NULL;
    Node* temp = NULL;
    int carry = 0;
    
    while (num1 != NULL || num2 != NULL || carry) {
        int sum = carry;
        if (num1 != NULL) {
            sum += num1->data;
            num1 = num1->next;
        }
        if (num2 != NULL) {
            sum += num2->data;
            num2 = num2->next;
        }
        
        carry = sum / 10;
        sum %= 10;
        
        Node* newNode = new Node(sum);
        if (ans == NULL) {
            ans = newNode;
            temp = ans;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    
    return ans;
}
