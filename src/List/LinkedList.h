#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h" //

class LinkedList {
private:
    Node* head; // 
    Node* tail; //
    int size;

public:
    LinkedList();
    ~LinkedList();

    void addFront(int value);
    void addBack(int value);
    void addAtIndex(int index, int value);
    void removeFront();
    void removeBack();
    void removeAtIndex(int index);
    void displayForward() const;
    void displayBackward() const;
    void clear();
};

#endif