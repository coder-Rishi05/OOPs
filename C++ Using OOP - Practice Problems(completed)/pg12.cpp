/*12. Write a C++ program to create a class called "Airplane" with a flight number, destination, and departure time attributes, and methods to check flight status and delay.*/

#include <iostream>

using namespace std;

class Airplane
{

private:
    int flightNumber;
    char destination[20];
    int departureTime;

public:
    void getdata()
    {
        cout << "Enter flight number : ";
        cin >> flightNumber;
        cout << "Enter Destination name : ";
        cin >> destination;
        cout << "Enter flight time : ";
        cin >> departureTime;
    }

   void status() {
        int currentTime = 12; // Current time ( 12PM)
        if (currentTime > departureTime) {
            cout << "Flight " << flightNumber << " to " << destination << " is delayed." << endl;
        } else {
            cout << "Flight " << flightNumber << " to " << destination << " is on time." << endl;
        }
    }
};

int main()
{
    Airplane obj1;
    obj1.getdata();
    obj1.status();
}

/* Output :

Enter flight number : 411123
Enter Destination name : Delhi
Enter flight time : 5
Flight 411123 to Delhi is delayed.

Enter flight number : 2132456
Enter Destination name : kolkata
Enter flight time : 12
Flight 2132456 to kol is on time.

 */