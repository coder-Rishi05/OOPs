// 8. Write a C++ program to create a class called "TrafficLight" with attributes for color and duration, and methods to change the color and check for red or green.


#include<iostream>
using namespace std;

class Trafficlight
{
	string colour;
	int duration;
	public :
		void get()
		{
			cout<<"Enter Colour : 1. Red 2.Green";
			cin>>colour;
			if(colour=="Red" || colour=="red" || colour=="RED")
			{
				duration=60;
			}
			else if(colour=="Green" || colour=="green" || colour=="GREEN")
			{
				duration=18;
			}
			else
			{
				cout<<endl<<"Enter Valid Colour!";
			}
		}
		void check();
};

void Trafficlight::check()
{
	if(colour=="Red" || colour=="red" || colour=="RED")
	{
		cout<<endl<<"It's Red Light !";
		cout<<endl<<"Please Wait!";
		cout<<endl<<"Duration : "<<duration;
	}
	else if(colour=="Green" || colour=="green" || colour=="GREEN")
	{
		cout<<endl<<"It's Green Light !";	
		cout<<endl<<"You can go!";
		cout<<endl<<"Duration : "<<duration;
	}
}


int main()
{
	Trafficlight t1;
	t1.get();
	t1.check();
}

/* Output :

Enter Colour : Red

It's Red Light !
Please Wait!
Duration : 60

Enter Colour : 1. Red 2.Green
Green

It's Green Light !
You can go!
Duration : 18

 */