// 9. Write a C++ program to create a class called "Employee" with a name, salary, and hire date attributes, and a method to calculate years of service.


#include<iostream>
using namespace std;

class Employee
{
	char name[20];
	int salary;
	int date,month,year;
	public:
		void get()
		{
			cout<<endl<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Salary : ";
			cin>>salary;
			cout<<"Enter year of hire : ";
			cin>>year;
			cout<<"Enter month of hire : ";
			cin>>month;
			cout<<"Enter day of hire : ";
			cin>>date;
		}
		void service(int y,int m,int d)
		{
			cout<<endl<<"Date of hiring : "<<date<<"-"<<month<<"-"<<year;
			if(m<month && d<date)
			{
				cout<<endl<<"Years of service : "<<(y-year)<<" years "<<(-(m-month))<<" months "<<(-(d-date))<<" days";
			}
			else if(m<month)
			{
				cout<<endl<<"Years of service : "<<(y-year)<<" years "<<(-(m-month))<<" months "<<(d-date)<<" days";
			}
			else if(d<date)
			{
				cout<<endl<<"Years of service : "<<(y-year)<<" years "<<(m-month)<<" months "<<(-(d-date))<<" days";
			}
			else
			{
				cout<<endl<<"Years of service : "<<(y-year)<<" years "<<(m-month)<<" months "<<(d-date)<<" days";
			}
		}
};

int main()
{
	int date,month,year;
	Employee e1,e2;
	year=2023;
	cout<<"Enter today's month : ";
	cin>>month;
	cout<<"Enter today's date : ";
	cin>>date;
	cout<<"Present Date : "<<date<<"-"<<month<<"-"<<year;
	e1.get();
	e2.get();
	e1.service(year,month,date);
	e2.service(year,month,date);
}

/* Output : 

Enter today's month : 4
Enter today's date : 23
Present Date : 23-4-2023
Enter Name : Rishabh
Enter Salary : 13000
Enter year of hire : 2004
Enter month of hire : 4
Enter day of hire : 2

Enter Name : Rishabh
Enter Salary : 13000
Enter year of hire : 2003
Enter month of hire : 4
Enter day of hire : 5

Date of hiring : 2-4-2004
Years of service : 19 years 0 months 21 days
Date of hiring : 5-4-2003
Years of service : 20 years 0 months 18 days

 */