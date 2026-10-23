#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

/**
 * @file LinkedList.h
 * @brief Definicja klasy reprezentującej dwukierunkową listę wiązaną.
 */

 /**
  * @class LinkedList
  * @brief Klasa implementująca dynamiczną listę dwukierunkową w języku C++.
  *
  * Klasa zarządza węzłami typu Node, umożliwiając efektywne operacje dodawania,
  * usuwania oraz przeglądania elementów zarówno w przód, jak i w tył.
  */
class LinkedList {
private:
    Node* head; ///< Wskaźnik na pierwszy węzeł (głowę) listy.
    Node* tail; ///< Wskaźnik na ostatni węzeł (ogon) listy.
    int size;   ///< Aktualna liczba elementów w liście.

public:
    /**
     * @brief Konstruktor domyślny. Tworzy pustą listę.
     */
    LinkedList();

    /**
     * @brief Destruktor. Zwalnia pamięć zajmowaną przez wszystkie węzły listy.
     */
    ~LinkedList();

    /**
     * @brief Dodaje nowy element na początek listy.
     * @param value Wartość typu całkowitego do dodania.
     */
    void addFront(int value);

    /**
     * @brief Dodaje nowy element na koniec listy.
     * @param value Wartość typu całkowitego do dodania.
     */
    void addBack(int value);

    /**
     * @brief Wstawia nowy element pod wskazany indeks.
     * @indeks Indeks, pod który chcemy wstawić element (liczony od 0).
     * @param value Wartość typu całkowitego do wstawienia.
     */
    void addAtIndex(int index, int value);

    /**
     * @brief Usuwa pierwszy element z listy.
     */
    void removeFront();

    /**
     * @brief Usuwa ostatni element z listy.
     */
    void removeBack();

    /**
     * @brief Usuwa element znajdujący się pod wskazanym indeksem.
     * @param index Indeks usuwanego elementu (liczony od 0).
     */
    void removeAtIndex(int index);

    /**
     * @brief Wyświetla zawartość listy od początku do końca (w przód).
     */
    void displayForward() const;

    /**
     * @brief Wyświetla zawartość listy od końca do początku (w tył).
     */
    void displayBackward() const;

    /**
     * @brief Usuwa wszystkie elementy z listy i resetuje jej stan.
     */
    void clear();
};

#endif