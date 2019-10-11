
# include "circular.h"

Circular::Circular()
{
	last = nullptr;
}
void Circular::addAtStart(int d)
{
	Node* temp = new Node(d);
	if (last == nullptr)
	{
		temp->next = temp;
		last = temp;
	}
	else
	{
		temp->next = last->next;
		 last->next = temp;
	}
	cout << "Node has been inserted succussfully " << endl;
}
void Circular::addAtEnd(int d)
{
	Node* temp = new Node(d);
	if (last == nullptr)
	{
		temp->next = temp;
		last = temp;
	}
	else
	{
		temp->next = last->next;
		last->next = temp;
		last = temp;
	}
	cout << "Node has been inserted succussfully " << endl;
}
void Circular::addAtSpecific(int find, int d) {

	if (last == nullptr)
	{
		cout << " List is empty Now " << endl;
	}
	else
	{
		Node* temp = new Node(d);
		Node * current = last->next;
		do
		{
			if (current->data == find)
			{

				temp->next = current->next;
				current->next = temp;
				break;
			}

			else
			{
				current = current->next;
			}
		} while (current != last);
		if (current == last)
		{
			temp->next = current->next;
			current->next = temp;
			last = temp;
		}

	}
}
void Circular::deleteFromStart() 
{

	if (last == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else
	{
		Node * current = last->next;
		last->next = current->next;
		delete current;
		cout << "Node has been removed succussfully " << endl;
	}
}
void Circular::deleteFromSpecific(int find)
{
	if (last == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else
	{
		Node * delt;
		Node * current = last;
		do
		{
			if (current->next->data == find)
			{
				delt = current->next;
				current->next = delt->next;
				delt->next = nullptr;
				delete delt;
				break;
			}
			else
			{
				current = current->next;
			}
		} while (current->next != last);
		if (current->next == last)
		{
			if (current->next == last && current->next->data == find)
			{
				delt = last;
				current->next = delt->next;
				delt->next = nullptr;
				delete delt;
			}
			else
			{
			//	cout << "Data not found " << endl;
			}
		}
		cout << "Node has been removed succussfully " << endl;
	}
}
void Circular::deleteFromLast()
{

	if (last == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else
	{
		Node * current = last->next;
		Node * delt = last;
		while (current->next != last)
		{
			current = current->next;
		}
		current->next = last->next;
		last = current;
		delt->next = nullptr;
		delete delt;
		cout << "Node has been removed succussfully " << endl;
	}
}
void Circular::print() {
	if (last == nullptr)
	{
		cout << "SORRY!" << endl << "no Data present to print " << endl;
	}
	else
	{
		Node * current = last->next;
		cout << "nodes are " << endl;
		do
		{
			cout << current->data << endl;
			current = current->next;
		} while (current != last->next);
	}
}