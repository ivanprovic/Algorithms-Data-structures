// C++ atm
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Bank{
	//private variables
private:
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int tot = 0;

	//public variables
public:
	//set person's data
	void setValue()
	{
		cout << "Enter name\n";
		cin.ignore();

		//To use space in string
		getline(cin, name);

		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}

	//function to display the req data 
	void showData()
	{
		cout << "Name:" << name << '\n';
		cout << "Account:" << accnumber << '\n';
		cout << "Account type:" << type << '\n';
		cout << "Balance:" << tot << '\n';
	}

	//function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}

	//function to show the balance amount
	void showbal()
	{
		tot = tot + amount;
		cout << "\nTotal balance is: " << tot;
	}

	//function to withdraw the amount in ATM
	void withdrawl()
	{

	}
};

//driver code
int main()
{
	return 0;
}

