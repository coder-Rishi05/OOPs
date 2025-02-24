/*25. Write a C++ program to create a class called Person with private instance variables name, age. and country. Provide public getter and setter methods to access and modify these variables.*/



#include<iostream>
using namespace std;

class Person
{
	char name[10];
	int age;
    char country[10];
	public:

		void getter()
		{
			cout<<"Enter the Name of person : ";
			cin>>name;
			cout<<"Enter the age of person : ";
			cin>>age;
			cout<<"Enter country of the person : ";
			cin>>country;
		}
		void setter()
		{
			cout<<endl<<"the Name of person : "<<name;
			cout<<endl<<"the age of person :  "<<age;
			cout<<endl<<"the country of person :  "<<country;
		}
};

int main()
{
	Person info;
	info.getter();
	info.setter();
}

/* Output :
Enter the Name of person : Rishabh
Enter the age of person : 18
Enter country of the person : India

the Name of person : Rishabh
the age of person :  18
the country of person :  India
 */