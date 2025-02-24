/*26. Write a C++ program to create a class called BankAccount with private instance variables accountNumber and balance. Provide public getter and setter methods to access and modify these variables.
*/


#include<iostream>
using namespace std;

class BankAccount
{
	int AccountNumber;
	int balance;
	public:
		void getter()
		{
			cout<<"Enter the AccountNumber of Bank : ";
			cin>>AccountNumber;
			cout<<"Enter balance of Bank Account : ";
			cin>>balance;
		}
		void setter()
		{
			cout<<endl<<"AccountNumber of Bank : "<<AccountNumber;
			cout<<endl<<"balance of Bank Account is : "<<balance;
		}
};

int main()
{
	BankAccount acc;
	acc.getter();
	acc.setter();
}

/* Output:

Enter the AccountNumber of Bank : 214134
Enter balance of Bank Account : 50000

AccountNumber of Bank : 214134
balance of Bank Account is : 50000


 */