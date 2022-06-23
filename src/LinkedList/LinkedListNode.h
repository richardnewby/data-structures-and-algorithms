//
// Created by rnewby on 6/20/2022.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTNODE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTNODE_H

struct LinkedListNode {
    LinkedListNode* next;
    int val;
    LinkedListNode(int x = 0) : next(nullptr), val(x) {};
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_LINKEDLISTNODE_H
