#include <iostream>
#include <cstdlib>
#include<time.h>
#include <LinkedList.h>

constexpr int MAX_VALUE = 100;

int main(int argc, char *argv[])
{
    // Seed the random number generator
    std::srand(time(0));

    // Create a new list
    LinkedListNode* head = new LinkedListNode(std::rand() % MAX_VALUE);

    // Add 3 random elements to the list
    for (int i = 1; i < 4; i++) {
        LinkedListNode* element = new LinkedListNode(std::rand() % MAX_VALUE);
        LinkedList::PushBack(head, element);
    }

    // Perform a merge sort on the new linked list
    LinkedListNode* merged = LinkedList::MergeSort(head);

    // Release dynamically allocated memory
    LinkedListNode* current = merged;
    while (current != nullptr) {
        LinkedListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}