/*28. Write a C++ program to create a class called Employee with private instance variables employee_id, employee_name, and employee_salary. Provide public getter and setter methods to access and modify the id and name variables, but provide a getter method for the salary variable that returns a formatted string.*/

#include<iostream>
#include<string> 
using namespace std;

class Employee
{
private:
    int id;
    double salary; 
    string name;

public:
    
    void setID(int empID) {
        id = empID;
    }

    int getID() const {
        return id;
    }

    void setName(const string& empName) {
        name = empName;
    }

    string getName() const {
        return name;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    string getFormattedSalary() const {
        return "Rupees " + to_string(salary);
    }

   void get() {
        cout << "Enter Employee ID : ";
        cin >> id;
        cout << "Enter Employee Salary : ";
        cin >> salary;
        cout << "Enter Employee Name : ";
        cin >> name;
    }

    void display() const {
        cout << endl << "Employee ID : " << id;
        cout << endl << "Employee Salary : " << getFormattedSalary();
        cout << endl << "Employee Name : " << name;
    }
};

int main()
{
    Employee emp;
    emp.get();
    emp.display();

    return 0;
}

/* Output:

Enter Employee ID : 4112
Enter Employee Salary : 13000
Enter Employee Name : Karan

Employee ID : 4112
Employee Salary : Rupees 13000.000
Employee Name : Karan

 */