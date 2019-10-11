
# include <iostream>
using namespace std;
# include "duublyLinkList.h"
int main()
{
	DoublyLinkList d1;
	
	int condition = 0;
	while (condition != 8)
	{

		cout << "============================================Menu============================================== " << endl << endl;
		cout << "\t\t\t\tPress 1 to ADD a node AT START " << endl;
		cout << "\t\t\t\tPress 2 to ADD a node AT LAST " << endl;
		cout << "\t\t\t\tPress 3 to ADD a node AT SPECIFIC INDEX " << endl;
		cout << "\t\t\t\tPress 4 to DELETE a node FROM START" << endl;
		cout << "\t\t\t\tPress 5 to DELETE a node FROM LAST" << endl;
		cout << "\t\t\t\tPress 6 to DELETE a node FROM SPECIFIC" << endl;
		cout << "\t\t\t\tPress 7 print " << endl;
		cout << "\t\t\t\tPress 8 exit " << endl;

		cout << "please enter Your Choice" << endl;
		cin >> condition;
		system("cls");
		int d = 0;    // for taking data
		if (condition == 1)
		{
			cout << "please Insert Node Data :" << endl;
			cout << " Enter number " << endl;
			cin >> d;
			d1.insertNodeAtFirst(d);

		}
		else if (condition == 2)
		{
			cout << "please Insert Node Data :" << endl;
			cout << " Enter Number " << endl;
			cin >> d;
			d1.insertNodeAtLast(d);
		}
		else if (condition == 3)
		{
			int find;
			cout << "please Insert data after which node Would added :" << endl;
			cin >> find;
			cout << "please Insert Node Data :" << endl;
			cout << " Enter Number " << endl;
			cin >> d;
			d1.insertNodeAtSpecific(find, d);
		}
		else if (condition == 4)
		{
			d1.deleteNodefromFirst();
		}
		else if (condition == 5)
		{
			d1.deleteNodefromLast();
		}
		else if (condition == 6)
		{
			cout << "please Insert data of Node you want to delete :" << endl;
			cin >> d;
			d1.deleteNodefromSpecific(d);
		}
		else if (condition == 7)
		{
			d1.display();
		}
		else if (condition == 8)
		{
			condition = 8;
		}
	}

	system("pause");
	return 0;
}