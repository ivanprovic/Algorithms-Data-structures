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
		int a, avai_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "Available Balance is" << avai_balance;
	}
};

//driver code
int main()
{
	//obj of class
	Bank b;

	int choice;

	//while loop to choose opts everytime
	while(1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			 << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			 << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			 << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			 << "~~~~~~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			 << "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;

        // choices
        switch (choice) {
        case 1:
            b.setValue();
            break;
        case 2:
            b.showData();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }	
	}
	return 0;
}

