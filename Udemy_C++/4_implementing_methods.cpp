#include <iostream>
#include <string>

using namespace std;

class Account 
{
private:
	//attributes
	string name;
	double balance;

public:
	//methods
	//Declaring inline member function
	void set_balance(double bal)
	{
		balance = bal;
	}
	
	double get_balance()
	{
		return balance;
	}

	//Methods will be declared outside the class declaration
	void set_name(string n);
	string get_name();

	bool deposit(double amount);
	bool withdraw(double amount);
};

void Account::set_name(string n)
{
	name = n;
}

bool Account::deposit(double amount)
{
	//if verify amount
	balance += amount;
	return true;
}

bool Account::withdraw(double amount)
{
	if(balance-amount >= 0)
	{
		balance -= amount;
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Account frank_account;
	frank_account.set_name("Franks account");
	frank_account.set_balance(1000.0);

	if(frank_account.deposit(200.0))
		cout << "Deposit is OK" << endl;
	else	
		cout << "Deposit failed " <<endl;

	if(frank_account.withdraw(500.0))
		cout <<"Withdraw is OK " << endl;
	else
		cout << "No sufficient funds" << endl;

	if(frank_account.withdraw(1500.0))
		cout <<"Withdraw is OK " << endl;
	else
		cout << "No sufficient funds" << endl;
	return 0;
}