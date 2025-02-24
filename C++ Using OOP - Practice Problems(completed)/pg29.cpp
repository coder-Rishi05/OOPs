/*29. Write a C++ program to create a class called Circle with a private instance variable radius. Provide public getter and setter methods to access and modify the radius variable. However, provide two methods called calculateArea() and calculatePerimeter() that return the calculated area and perimeter based on the current radius value.
*/

#include<iostream>
using namespace std;

class Circle
{
	int radius;
	float perimeter;
	float area;
	public :
		void get()
		{
			cout<<"Enter Radius of Circle : ";
			cin>>radius;
		}
		void display()
		{
			cout<<endl<<"Radius of Circel : "<<radius;
		}
		float CalculatePerimeter()
		{
			perimeter=2*3.14*radius;
			return perimeter;
		}
		float CalculateArea()
		{
			area=3.14*radius*radius;
			return area;
		}
};

int main()
{
	Circle c;
	float ansa,ansp;
	c.get();
	c.display();
	ansa=c.CalculateArea();
	ansp=c.CalculatePerimeter();
	cout<<endl<<"Area of Circel : "<<ansa;
	cout<<endl<<"Perimeter of Circle : "<<ansp;
}

/*  OUtput :

Enter Radius of Circle : 21

Radius of Circel : 21
Area of Circel : 1384.74
Perimeter of Circle : 131.88 */