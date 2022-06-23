#include <LinkedList.h>
#include <iostream>

LinkedListNode* LinkedList::MergeSort(LinkedListNode *head) {
    // Check for an empty linked list or a linked list with a single node
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    // Find the midpoint of the linked list
    LinkedListNode* mid = SplitMidPoint(head);

    // Recursively sort the left and right linked lists
    LinkedListNode* left = MergeSort(head);
    LinkedListNode* right = MergeSort(mid);

    // Merge and return the left and right linked list
    return merge(left, right);
}

LinkedListNode* LinkedList::SplitMidPoint(LinkedListNode* head) {
    LinkedListNode* slow = head;
    LinkedListNode* fast = head;
    LinkedListNode* prev = nullptr;

    while (fast != nullptr && fast->next != nullptr) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = nullptr;

    return slow;
}

LinkedListNode* LinkedList::merge(LinkedListNode* left, LinkedListNode* right) {
    LinkedListNode* dummy = new LinkedListNode;
    LinkedListNode* merged = dummy;

    while (left != nullptr && right != nullptr) {
        if (left->val < right->val) {
            merged->next = left;
            left = left->next;
        } else {
            merged->next = right;
            right = right->next;
        }
        merged = merged->next;
    }

    if (left != nullptr) {
        merged->next = left;
    } else if (right != nullptr) {
        merged->next = right;
    }

    // Reset the head pointer
    merged = dummy->next;

    // Free the memory allocated for the dummy head
    delete dummy;

    return merged;
}

void LinkedList::PushBack(LinkedListNode *head, LinkedListNode *element) {
    // Return if the head is null
    if (head == nullptr) {
        return;
    }

    // Point a tail pointer at the head node
    LinkedListNode* tail = head;

    // Walk the tail node pointer forward until we reach the end
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // Connect the new element to the end
    tail->next = element;
}
