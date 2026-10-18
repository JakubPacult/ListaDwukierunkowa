#ifndef NODE_H
#define NODE_H

class Node {
public:
    int data; // Wartość przechowywana w węźle

    Node* prev; // Wskaźnik na poprzedni węzeł

    Node* next; // Wskaźnik na następny węzeł

    Node(int value); // Konstruktor przyjmujący wartość
};

#endif