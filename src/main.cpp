#include <iostream>
#include "List/LinkedList.h"

int main() {
    // Utworzenie pustej listy
    LinkedList list;

    std::cout << "Dodawanie elemntow do listy:" << std::endl;
    list.addBack(10);       // Lista: 10
    list.addBack(20);       // Lista: 10, 20
    list.addFront(5);       // Lista: 5, 10, 20
    list.displayForward();  // Oczekiwane: 5 10 20

    std::cout << "\nDodawania na danym indeksie:" << std::endl;
    list.addAtIndex(1, 15); // Wstawiamy 15 na indeks 1 -> Lista: 5, 15, 10, 20
    list.displayForward();  // Oczekiwane: 5 15 10 20

    std::cout << "\nWyswietlanie wstecz:" << std::endl;
    list.displayBackward(); // Oczekiwane: 20 10 15 5

    std::cout << "\nUsuwanie z przodu i z tylu:" << std::endl;
    list.removeFront();     // Usuwa 5
    list.removeBack();      // Usuwa 20
    list.displayForward();  // Oczekiwane: 15 10

    std::cout << "\nUsuwanie na danym indeksie:" << std::endl;
    list.addBack(30);       // Lista: 15, 10, 30
    list.addBack(40);       // Lista: 15, 10, 30, 40
    std::cout << "Stan przed usunieciem: ";
    list.displayForward();

    list.removeAtIndex(1);  // Usuwa element z indeksem 1 (czyli wartość 10)
    std::cout << "Stan po usunieciu indeksu 1: ";
    list.displayForward();  // Oczekiwane: 15 30 40

    std::cout << "\nCzyszczenie listy:" << std::endl;
    list.clear();
    list.displayForward();  // Oczekiwane: pusta lista

    return 0;
}