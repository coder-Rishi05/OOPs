/* 3. Write a C++ program to create a class called "Rectangle" with width and height attributes. Calculate the area and perimeter of the rectangle */

#include <iostream>

using namespace std;

class Rectangle
{
        int width;
        int height;
        int length;
        int area;
        int perimeter;

public:
        void values()
        {

                cout << "Enter the length of the rectangle : " << endl;
                cin >> length;
                cout << "Enter the width of the rectangle : " << endl;
                cin >> width;
                area = length * width;
                perimeter = 2 * (width + length);
        };
        void result()
        {
                cout << "the area of the Rectangle is : " << area << endl;
                cout << "the perimeter of the Rectangle is : " << perimeter;
        }
};

int main()
{
        Rectangle obj1, obj2;
        obj1.values();
        obj1.result();
        return 0;
};

/* Output

Enter the length of the rectangle : 
23
Enter the width of the rectangle : 
12
the area of the Rectangle is : 276
the perimeter of the Rectangle is : 70

 */