/*You are given a Linked list of size n. The list is in alternating ascending and descending orders. Sort the given linked list in non-decreasing order.

Example 1:

Input:
n = 6
LinkedList = 1->9->2->8->3->7
Output: 1 2 3 7 8 9
Explanation: 
After sorting the given list will be 1->2->3->7->8->9.
 */
  void sort(Node **head) {
    if (*head == nullptr || (*head)->next == nullptr)
        return;

    Node *ascHead = *head; // Pointer for ascending list
    Node *descHead = (*head)->next; // Pointer for descending list

    // Separate the ascending and descending lists
    Node *ascTail = ascHead;
    Node *descTail = descHead;
    while (descTail != nullptr && descTail->next != nullptr) {
        ascTail->next = descTail->next;
        ascTail = ascTail->next;
        descTail->next = ascTail->next;
        descTail = descTail->next;
    }
    
    // Reverse the descending list
    Node *prev = nullptr;
    Node *curr = descHead;
    Node *next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    descHead = prev;

    // Merge the ascending and reversed descending lists
    ascTail->next = descHead;

    // Update the head
    *head = ascHead;
}
