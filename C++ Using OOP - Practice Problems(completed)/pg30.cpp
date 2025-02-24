/*Write a C++ program to create a class called Car with private instance variables company_name, model_name, year, and mileage. Provide public getter and setter methods to access and modify the company_name, model_name, and year variables. However, only provide a getter method for the mileage variable.*/
#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string company_name;
    string model_name;
    int year;
    int mileage;

public:
    
    void setter() {
        cout << "Enter the name of the car company: ";
        cin >> company_name;
        cout << "Enter the name of the car model: ";
        cin >> model_name;
        cout << "Enter the year of manufacture: ";
        cin >> year;
    }

    string getCompanyName() const {
        return company_name;
    }

    string getModelName() const {
        return model_name;
    }

    int getYear() const {
        return year;
    }

    void setMileage(int m) {
        mileage = m;
    }

    int getMileage() const {
        return mileage;
    }
};

int main() {
    Car obj1;

    obj1.setter();

    int mileage;
    cout << "Enter the mileage of the car: ";
    cin >> mileage;
    obj1.setMileage(mileage);

    cout << "Car details:" << endl;
    cout << "Company Name: " << obj1.getCompanyName() << endl;
    cout << "Model Name: " << obj1.getModelName() << endl;
    cout << "Year of Manufacture: " << obj1.getYear() << endl;
    cout << "Mileage: " << obj1.getMileage() << endl;

    return 0;
}

/* Output : 

Enter the name of the car company: Toyota
Enter the name of the car model: T21
Enter the year of manufacture: 2015
Enter the mileage of the car: 45
Car details:
Company Name: Toyota
Model Name: T21
Year of Manufacture: 2015
Mileage: 45

*/