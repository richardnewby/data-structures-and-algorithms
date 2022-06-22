#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_

#include <LinkedListNode.h>

class LinkedList {
public:
    static LinkedListNode* FindMidPoint(const LinkedListNode& head);
    const LinkedListNode* getHead();
private:
    LinkedListNode* head_;
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLIST_H_
