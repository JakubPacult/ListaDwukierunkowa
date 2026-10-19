#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data; // Wartość przechowywana w węźle

    Node* prev; // Wskaźnik na poprzedni węzeł

    Node* next; // Wskaźnik na następny węzeł

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

#endif