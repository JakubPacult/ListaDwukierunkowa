#ifndef NODE_FACTORY_H
#ifndef NODE_FACTORY_H
#define NODE_FACTORY_H

#include "./List/Node.h"

class NodeFactory {
public:
    // Metoda fabrykująca (statyczna), która tworzy i zwraca nowy węzeł
    static Node* createNode(int value) {
        return new Node(value);
    }
};

#endif
#endif