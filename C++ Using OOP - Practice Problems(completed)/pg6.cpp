/* 6. Write a C++ program to create a class called "Employee" with a name, job title, and salary attributes, and methods to calculate and update salary. */

#include <iostream>
#include <cstring> // For strcpy

using namespace std;

class Employee { 
private:
    char name[50];
    char jobtitle[50];
    float salary;

public:
    void data() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your job title: ";
        cin >> jobtitle;
        cout << "Enter your salary: ";
        cin >> salary;
    }

    void disdt() {
        cout << "The name of the employee is: " << name << endl;
        cout << "The Job title of the employee is: " << jobtitle << endl;
        cout << "The salary of the employee is: " << salary << endl;
    }

    void updatesal() {
        if (salary > 50000) {
            cout << "Your salary is increased by 2000" << endl;
            salary += 2000;
        } else if (salary > 25000) {
            cout << "Your salary is increased by 1500" << endl;
            salary += 1500;
        } else if (salary > 15000) {
            cout << "Your salary is increased by 1000" << endl;
            salary += 1000;
        } else {
            cout << "Your job salary is enough" << endl;
        }
        cout << "Your updated salary is: " << salary << endl;
    }
};

int main() {
    Employee obj1;
    obj1.data();
    obj1.disdt();
    obj1.updatesal();
    return 0;
}

/* Output :

Enter your name: Rishabh
Enter your job title: WebDev
Enter your salary: 50000
The name of the employee is: Rishabh
The Job title of the employee is: WebDev
The salary of the employee is: 50000
Your salary is increased by 1500
Your updated salary is: 51500

 */
