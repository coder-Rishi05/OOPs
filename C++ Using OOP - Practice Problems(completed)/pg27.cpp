/*27. Write a C++ program to create a class called Rectangle with private instance variables length and width. Provide public getter and setter methods to access and modify these variables.*/


#include<iostream>
using namespace std;

class Rectangle
{
	int length;
	int width;
	public:
		void getter()
		{
			cout<<"Enter Length of Rectangle : ";
			cin>>length;
			cout<<"Enter Width of Rectangle : ";
			cin>>width;
		}
		void setter()
		{
			cout<<endl<<"Lenght of Rectangle : "<<length;
			cout<<endl<<"Width of Rectangle : "<<width;
		}
};

int main()
{
	Rectangle r;
	r.getter();
	r.setter();
}

/* Output:

Enter Length of Rectangle : 32
Enter Width of Rectangle : 24

Lenght of Rectangle : 32
Width of Rectangle : 24

 */