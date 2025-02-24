/*7.  Write a C++ program to create a class called "Bank" with a collection of accounts and methods to add and remove accounts, and to deposit and withdraw money. Also define a class called "Account" to maintain account details of a particular customer.*/


#include<iostream>
using namespace std;
class Account
{
	char name[20];
	int age;
	public:
		void getd()
		{
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Age : ";
			cin>>age;
		}
		void display()
		{
			cout<<endl<<"Name : "<<name;
			cout<<endl<<"Age : "<<age;
		}
};

class Bank
{
	int balance;
	int change;
	Account a1;
	public :
		Bank()
		{
			a1.getd();
			balance=10000;
		}
		void withdraw()
		{
			a1.display();
			cout<<endl<<"Enter Amount to withdraw : ";
			cin>>change;
			if(change>balance)
			{
				cout<<endl<<"Insufficient Balance!";
				cout<<endl<<"Current balance : "<<balance;
			}
			else
			{
				balance=balance-change;
				cout<<endl<<"Amount Withdrawed Succesfully!";
				cout<<endl<<"Current Balance : "<<balance;
			}
		}
		void deposit()
		{
			a1.display();
			cout<<endl<<"Enter Amount to Deposit : ";
			cin>>change;
			balance=balance+change;
			cout<<endl<<"Amount Deposited Successfully!";
			cout<<endl<<"Current Balance : "<<balance;
		}
		void current()
		{
			a1.display();
			cout<<endl<<"Current Balance : "<<balance;
		}
};

int main()
{
	Bank b1;
	int ch;
	cout<<"Menu!!!";
	cout<<endl<<"1. Deposite";
	cout<<endl<<"2. Withdraw";
	cout<<endl<<"3. Current Balance";
	cout<<endl<<"4. Exit";
	cout<<endl<<"Enter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
			b1.deposit();
			break;
		case 2:
			b1.withdraw();
			break;
		case 3:
			b1.current();
			break;
		case 4:
			cout<<"Goodbye!";
			break;
		default :
			cout<<"Invalid choice!";
	}
}

/*  

Output :
Enter Name : Rishabh
Enter Age : 18
Menu!!!
1. Deposite
2. Withdraw
3. Current Balance
4. Exit
Enter your choice : 3

Name : Rishabh
Age : 18
Current Balance : 10000

*/