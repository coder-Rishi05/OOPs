/*19. Write a C++ program to create a class with methods to search for flights and hotels, and to book and cancel reservations.*/

#include <iostream>
#include <string>

using namespace std;

class TravelAgency {
private:
   
    string flightDetails;
    string hotelDetails;
    bool flightReserved;
    bool hotelReserved;

public:
    TravelAgency() : flightReserved(false), hotelReserved(false) {}

    void searchFlights(const string& details) {
       
        flightDetails = details;
        cout << "Searching for flights with details: " << details << endl;
    }

    void searchHotels(const string& details) {

        hotelDetails = details;
        cout << "Searching for hotels with details: " << details << endl;
    }

    void bookFlight() {
        if (!flightReserved) {
            cout << "Flight reservation booked successfully." << endl;
            flightReserved = true;
        } else {
            cout << "Flight reservation already booked." << endl;
        }
    }

    void bookHotel() {
        if (!hotelReserved) {
            cout << "Hotel reservation booked successfully." << endl;
            hotelReserved = true;
        } else {
            cout << "Hotel reservation already booked." << endl;
        }
    }

    void cancelFlight() {
        if (flightReserved) {
            cout << "Flight reservation canceled successfully." << endl;
            flightReserved = false;
        } else {
            cout << "No flight reservation to cancel." << endl;
        }
    }

    void cancelHotel() {
        if (hotelReserved) {
            cout << "Hotel reservation canceled successfully." << endl;
            hotelReserved = false;
        } else {
            cout << "No hotel reservation to cancel." << endl;
        }
    }
};

int main() {
    
    TravelAgency agency;

    agency.searchFlights("From: Delhi, To: CHANDIGARH, Date: 2024-05-01");
    agency.bookFlight();
    agency.cancelFlight();

    agency.searchHotels("Aroma, Check-in: 2024-05-01, Check-out: 2024-05-05");
    agency.bookHotel();
    agency.cancelHotel();

    return 0;
}

/* Output :

Searching for flights with details: From: Delhi, To: CHANDIGARH, Date: 2024-05-01
Flight reservation booked successfully.
Flight reservation canceled successfully.
Searching for hotels with details: Aroma, Check-in: 2024-05-01, Check-out: 2024-05-05
Hotel reservation booked successfully.
Hotel reservation canceled successfully.

*/