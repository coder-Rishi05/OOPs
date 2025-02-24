/* 4. Write a C++ program to create a class called "Circle" with a radius attribute. You can access and modify this attribute. Calculate the area and circumference of the circle. */

#include <iostream>

using namespace std;

class Circle
{
      float radius;
       float area;
      float circum;

public:
        void values()
        {

                cout << "Enter the radius of the circle : " << endl;
                cin >> radius;
                area = 3.14 * (radius* radius);
                circum = 2 * (3.14*radius);
        };
        void result()
        {
                cout << "the area of the circle is : " << (float)area << endl;
                cout << "the circumference of the circle is : " << (float)circum;
        }
};

int main()
{
        Circle obj1, obj2;
        obj1.values();
        obj1.result();
        return 0;
};

/* Output : 

Enter the radius of the circle : 
21
the area of the circle is : 1384.74
the circumference of the circle is : 131.88

*/

