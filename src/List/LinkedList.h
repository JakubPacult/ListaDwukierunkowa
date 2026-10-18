#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h" // Dodanie pliku nag³ówkowego Node.h

class LinkedList() {
private:
	Node* prev;
	Node* next;
	int data;
public:
	LinkedList(); // konstruktor tworz¹cy pust¹ listê
	~LinkedList(); // destruktor usuwa listê

	// dodaje pierwszy element
	void addFront(int value);

	// dodaje ostatni element
	void addLast(int value);

	// dodaje element na danym indeksie
	void addIndex(int index, int value);

	// usuwa pierwszy element
	void removeFront();

	// usuwa ostatni element
	void removeLast();

	// usuwa okreœlony element
	void removeIndex(int index);

	// wyœwietla listê (od pocz¹tku)
	void displayForward();

	// wyœwietla listê (od koñca)
	void displayBackward();

	// usuwa zawartoœæ listy
	void clear();
};

#endif 
