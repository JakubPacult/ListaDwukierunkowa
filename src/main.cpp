#include <iostream>
#include "Iterator/Iterator.h"
#include "Factory/NodeFactory.h"
#include "List/LinkedList.h"
#include "List/Node.h"

int main() {
    // Tworzenie węzłów przy użyciu Wzorca Fabryki
    Node* first = NodeFactory::createNode(10);
    Node* second = NodeFactory::createNode(20);

    // Łączenie węzłów ręcznie
    first->next = second;
    second->prev = first;

    std::cout << "Przechodzenie po liscie za pomoca iteratora:\n";

    // Użycie naszego nowego Iteratora
    for (ListIterator it(first); it != ListIterator(nullptr); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Sprzątanie pamięci
    delete first;
    delete second;

    return 0;
}