/*24. Create a class showing the area of circle and rectangle by method overloading.*/
#include <iostream>

using namespace std;

class AreaCalculator {
public:
    float calculateArea(float radius) {
        return 3.14f * radius * radius; 
    }

    float calculateArea(float length, float width) {
        return length * width;
    }
};

int main() {
    AreaCalculator calculator;

    float radius, length, width;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    cout << "Area of circle with radius " << radius << " is: " << calculator.calculateArea(radius) << endl;

    cout << "Area of rectangle with length " << length << " and width " << width << " is: " << calculator.calculateArea(length, width) << endl;

    return 0;
}

/* Output :

Enter the radius of the circle: 5
Enter the length and width of the rectangle: 45 32
Area of circle with radius 5 is: 78.5
Area of rectangle with length 45 and width 32 is: 1440

*/