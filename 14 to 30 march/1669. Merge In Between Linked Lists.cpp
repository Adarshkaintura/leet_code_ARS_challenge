/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
    if (list1 == nullptr) return list2;
    if (list2 == nullptr) return list1;

    ListNode* temp1 = list1;
    ListNode* startPrev = nullptr; // Node before 'a'
    ListNode* endNext = nullptr;   // Node after 'b'

    // Find the node just before 'a'
    for (int i = 0; i < a - 1 && temp1 != nullptr; ++i) {
        temp1 = temp1->next;
    }
    if (temp1 == nullptr) return list1; // 'a' is out of bounds
    startPrev = temp1;

    // Find the node just after 'b'
    temp1 = list1; // Reset temp1 to start of list1
    for (int i = 0; i <= b && temp1 != nullptr; ++i) {
        temp1 = temp1->next;
    }
    if (temp1 == nullptr) return list1; // 'b' is out of bounds
    endNext = temp1;

    // Merge list2 in between
    startPrev->next = list2;

    // Find the end of list2
    ListNode* temp2 = list2;
    while (temp2->next != nullptr) {
        temp2 = temp2->next;
    }

    // Connect the end of list2 to the node after 'b'
    temp2->next = endNext;

    return list1;
}

};
