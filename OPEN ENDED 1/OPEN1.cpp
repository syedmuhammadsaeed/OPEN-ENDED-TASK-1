#include <iostream>
#include<string>
using namespace std;
int main()
{
	string Userselect1, Userselect2;
	int Userselect, Duedate = 5, Userdate;
	int fine;
	cout << "enter 0 for return a 1 for borrow ";
	cin >> Userselect;
	if (Userselect == 1)
	{
		cout << "name of book you want to borrow ";
		cin >> Userselect1;
		cout << "  User have borrowed a book " << Userselect1 << endl;
		cout << "  warning!\n   If User failed to return the book on Time.User will be fined with  charges.\n";
		cout << "  Fine system : 1$ per day. ";

	}
	else if (Userselect == 0)
	{
		cout << "which book you want to return:";
		cin >> Userselect2;
		cout << "User have returned " << Userselect2 << endl;
		cout << "Enter the Days for which the book was taken:";
		cin >> Userdate;
		if (Userdate > Duedate)
		{

			fine = Userdate - Duedate;
			cout << "Please pay Fine " << fine << "$ ";
			cout << "As you have not returned the book for " << fine << "days.\n";
			cout << "(1$ per day)";
		}

	}
	else
	{
		cout << "Please enter a correct input.\n";

	}

	cout << "\n";

	return (0);
}