#ifndef ITERATOR_H
#define ITERATOR_H

#include "../List/Node.h"

class ListIterator {
private:
    Node* current; // Wskaźnik na aktualny węzeł w iteracji

public:
    // Konstruktor
    explicit ListIterator(Node* ptr) : current(ptr) {}

    // Przeciążenie operatora wyłuskania (*it), aby zwracał wartość węzła
    int& operator*() const {
        return current->data;
    }

    // Przeciążenie operatora inkrementacji prefixowej (++it) - przejście do następnego elementu
    ListIterator& operator++() {
        if (current != nullptr) {
            current = current->next;
        }
        return *this;
    }

    // Przeciążenie operatora dekrementacji prefixowej (--it) - przejście do poprzedniego elementu
    ListIterator& operator--() {
        if (current != nullptr) {
            current = current->prev;
        }
        return *this;
    }

    // Sprawdzenie równości (czy iteratory wskazują na ten sam element)
    bool operator==(const ListIterator& other) const {
        return current == other.current;
    }

    // Sprawdzenie nierówności (!=)
    bool operator!=(const ListIterator& other) const {
        return current != other.current;
    }

    // Metoda pomocnicza zwracająca surowy wskaźnik (jeśli potrzebny)
    Node* getNode() const {
        return current;
    }

};

#endif