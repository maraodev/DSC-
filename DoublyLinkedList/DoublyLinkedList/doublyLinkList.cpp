
# include "duublyLinkList.h"

DoublyLinkList::DoublyLinkList()
{
	start = nullptr;
}
void DoublyLinkList::insertNodeAtFirst(int d)
{
	Node *temp = new Node(d);
	if (start == nullptr)
	{
		start = temp;
	}
	else {
		temp->right = start;
		start->left = temp;
		start = temp;
	}
}
void DoublyLinkList::insertNodeAtLast(int d)
{
	Node *temp = new Node(d);
	if (start == nullptr)
	{
		start = temp;
	}
	else 
	{
		Node *c = start;
		while (c->right != nullptr)
		{
			c = c->right;
		}
		if (c->right == nullptr)
		{
			c->right = temp;
			temp->left = c;
		}
	}
}
void DoublyLinkList::insertNodeAtSpecific(int find,int d)
{
	Node * temp, *c;
	temp = new Node(d);
	c = start;
	while (c->data != find)
	{
		c=c->right;
	}
	if (c->data == find && c->right!=nullptr)
	{
		Node * c2= c->right;
		temp->left = c2->left;
		temp->right = c->right;
		c->right = temp;
		c2->left = temp;
	}
	if (c->data == find && c->right == nullptr)
	{
		c->right = temp;
		temp->left = c;
	}
}

void DoublyLinkList::deleteNodefromFirst()
{
	if (start == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else if (start->right == nullptr)
	{
		Node * c = start;
		start = start->right;
		delete c;
	}
	else
	{
		Node * c = start;
		start = start->right;
		start->left = nullptr;
		c->right = nullptr;
		delete c;
	}
}
void DoublyLinkList::deleteNodefromLast()
{
	Node *c2, *c;
	c= start->right;
	c2 = start;
	if (start == nullptr)
	{
		cout << "list is empty" << endl;
	}

	if (c2 == start && c == nullptr)
	{
		start = nullptr;
		delete c2;
	}
	else {
		while (c->right != nullptr)
		{
			c = c->right;
			c2 = c2->right;
		}
		if (c->right == nullptr)
		{
			c2->right = nullptr;
			delete c;
		}
	}
}
void DoublyLinkList::deleteNodefromSpecific(int d)
{

	if (start == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else if (start->data == d)
	{
		deleteNodefromFirst();
	}
	else if (start->right != nullptr)
	{
		
			Node *c = start->right;
			while (c->right != nullptr)
			{
				if (c->data == d)
				{
					Node * pre = c->left;
					Node *next = c->right;
					pre->right = c->right;
					next->left = c->left;
					break;
				}
				else
				{
					c = c->right;
				}
			}

			if (c->data == d && c->right == nullptr)
			{
				deleteNodefromLast();
			}
			else
			{
				cout << "data not found ! PLEASE READ INSTRUCTIONS CAREFULLY" << endl;
			}

	}
	else
	{
		cout << "data not found ! PLEASE READ INSTRUCTIONS CAREFULLY" << endl;
	}
	
}

void DoublyLinkList::display()
{
	Node *c = start;
	if (c == nullptr)
	{
		cout << "list is empty" << endl;
	}
	else
	{
		while (c != nullptr)
		{
			cout << c->data << " , ";
			c = c->right;
		}
		cout << endl << endl;
	}
}