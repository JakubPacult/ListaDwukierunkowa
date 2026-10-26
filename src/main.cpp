/**
 * @file main.cpp
 * @brief Główny plik programu demonstrujący listę dwukierunkową, wzorzec Fabryki oraz Iteratora.
 */

#include <iostream>
#include <windows.h>
#include "Iterator/Iterator.h"
#include "Factory/NodeFactory.h"
#include "List/LinkedList.h"
#include "List/Node.h"


int main() {
    // Ustawienie polskiego kodowania w konsoli
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "---- DEMONSTRACJA PROJEKTU: LISTA DWUKIERUNKOWA Z WZORCAMI PROJEKTOWYMI ----\n\n";

    // 1. Inicjalizacja listy
    LinkedList lista;

    // 2. Testowanie dodawania elementów 

    std::cout << "[1] Dodawanie elementów do listy (z użyciem wzorca Fabryki):\n";
    lista.addFront(20);
    lista.addFront(10);
    lista.addBack(30);
    lista.addBack(40);

    lista.displayForward();
    lista.displayBackward();
    std::cout << "\n";

    // 3. Demonstracja Wzorca Iteratora

    std::cout << "[2] Przeglądanie listy za pomocą Wzorca Iteratora:\n";
    std::cout << "Wartości odczytane przez iterator: ";

    for (ListIterator it = lista.begin(); it != lista.end(); ++it) {
        std::cout << "[" << *it << "] ";
    }
    std::cout << "\n\n";

    // 4. Testowanie wstawiania pod indeks
    std::cout << "[3] Wstawianie elementu (25) pod indeks 2:\n";
    lista.addAtIndex(2, 25);
    lista.displayForward();
    std::cout << "\n";

    // 5. Testowanie usuwania elementów
    std::cout << "[4] Operacje usuwania elementów:\n";
    std::cout << "- Usuwanie z przodu (removeFront):\n";
    lista.removeFront();
    lista.displayForward();

    std::cout << "- Usuwanie z tyłu (removeBack):\n";
    lista.removeBack();
    lista.displayForward();
    std::cout << "\n";

    // 6. Czyszczenie struktury
    std::cout << "[5] Czyszczenie całej listy (clear / destruktor):\n";
    lista.clear();
    lista.displayForward();

    std::cout << "\nProgram zakończył działanie pomyślnie. Wszystkie zasoby zostały zwolnione.\n";
    return 0;
}