#pragma once
# include "node.h"
class Circular {
	Node * last;
public:
	Circular();
	void addAtStart(int);
	void addAtSpecific(int,int);
	void addAtEnd(int);
	void deleteFromStart();
	void deleteFromSpecific(int);
	void deleteFromLast();
	void print();
};