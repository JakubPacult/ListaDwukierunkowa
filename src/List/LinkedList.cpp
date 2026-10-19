#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr), tail(nullptr), size(0) {}
LinkedList::~LinkedList() { clear(); }

void LinkedList::addFront(int value) {
    Node* newNode = new Node(value);
    if (size == 0) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

void LinkedList::addBack(int value) {
    Node* newNode = new Node(value);
    if (size == 0) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

void LinkedList::addAtIndex(int index, int value) {
    if (index < 0 || index > size) {
        std::cout << "Nieprawidlowy indeks!\n";
        return;
    }
    if (index == 0) {
        addFront(value);
        return;
    }
    if (index == size) {
        addBack(value);
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    Node* newNode = new Node(value);
    Node* prevNode = current->prev;

    prevNode->next = newNode;
    newNode->prev = prevNode;

    newNode->next = current;
    current->prev = newNode;

    size++;
}

void LinkedList::removeFront() {
    if (size == 0) return;

    Node* temp = head;
    if (size == 1) {
        head = tail = nullptr;
    }
    else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    size--;
}

void LinkedList::removeBack() {
    if (size == 0) return;

    Node* temp = tail;
    if (size == 1) {
        head = tail = nullptr;
    }
    else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    size--;
}

void LinkedList::removeAtIndex(int index) {
    if (index < 0 || index >= size) {
        std::cout << "Nieprawidlowy indeks!\n";
        return;
    }
    if (index == 0) {
        removeFront();
        return;
    }
    if (index == size - 1) {
        removeBack();
        return;
    }

    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;

    delete current;
    size--;
}

void LinkedList::displayForward() const {
    Node* current = head;
    std::cout << "Lista (przod): ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

void LinkedList::displayBackward() const {
    Node* current = tail;
    std::cout << "Lista (tyl): ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << "\n";
}

void LinkedList::clear() {
    while (size > 0) {
        removeFront();
    }
}