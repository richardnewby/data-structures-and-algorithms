#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_

#include <LinkedListNode.h>

class LinkedList {
public:
    static void PushBack(LinkedListNode* head, LinkedListNode* element);
    static LinkedListNode* MergeSort(LinkedListNode* head);

private:
    static LinkedListNode* SplitMidPoint(LinkedListNode* head);
    static LinkedListNode* merge(LinkedListNode* left, LinkedListNode* right);
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_
