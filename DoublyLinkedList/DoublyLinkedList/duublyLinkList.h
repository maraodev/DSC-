#pragma once
# include "node.h"
class DoublyLinkList {
	Node *start;
public:
	// constructor
	DoublyLinkList();
	// insertions
	void insertNodeAtFirst(int);
	void insertNodeAtLast(int);
	void insertNodeAtSpecific(int ,int);
	// deletions
	void deleteNodefromFirst();
	void deleteNodefromLast();
	void deleteNodefromSpecific(int);
	// display
	void display();
};