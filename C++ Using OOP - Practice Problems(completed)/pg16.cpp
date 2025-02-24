/*16. Write a C++ program to create a class called "Shape" with abstract methods for calculating area and perimeter, and subclasses for "Rectangle", "Circle", and "Triangle".*/

#include <iostream>

using namespace std;

class Shape {

public:

virtual void calculateArea()  = 0;
virtual void calculatePerimeter()  = 0;
     
};


class Circle : public Shape {

public:

void calculateArea () override{
        float r;
        cout<<"Calculating Area Circle"  <<endl;
        cout<<"Enter  radius of the circle : " ;
        cin>>r;
        cout<<"area of cicle is : " <<r*r*3.14<<endl;

    };
    void calculatePerimeter () override{
      cout<<"Calculating perimeter of Circle"<<endl;
      float r;
     cout<<"Enter  radius of the circle : " ;
     cin>>r;
     cout<<"Perimeter of cicle is : " <<2*r*3.14<<endl;
    }

};
class Triangle : public Shape {

public:

void calculateArea () override{
        float h,b;
        cout<<"Calculating Area of triangle "  <<endl;
        cout<<"Enter  base of the Triangle : " ;
        cin>>b;
        cout<<"Enter  height of the Triangle : " ;
        cin>>h;
        cout<<"area of Triangle is : " <<b*h*0.5<<endl;

    };
    void calculatePerimeter () override{
      cout<<"Calculating perimeter of Triangle"<<endl;
      float a,b,c;
     cout<<"Enter  side 1 of the Triangle : " ;
     cin>>a;
     cout<<"Enter  side 2 of the Triangle : " ;
     cin>>b;
     cout<<"Enter  side 3 of the Triangle : " ;
     cin>>c;
     cout<<"Perimeter of Triangle is : " <<a+b+c<<endl;
    }

};
class Rectangle : public Shape {

public:

void calculateArea () override{
        float h,b;
        cout<<"Calculating Area of Rectangle "  <<endl;
        cout<<"Enter  base of the Rectangle : " ;
        cin>>b;
        cout<<"Enter  height of the Rectangle : " ;
        cin>>h;
        cout<<"area of Rectangle is : " <<b*h<<endl;

    };
    void calculatePerimeter () override{
      cout<<"Calculating perimeter of Rectangle"<<endl;
      float l,w,lw;
     cout<<"Enter  length of the Rectangle : " ;
     cin>>l;
     cout<<"Enter  width  of the Rectangle : " ;
     cin>>w;
     lw = l+w;
     cout<<"Perimeter of Rectangle is : " <<lw*2<<endl;
    }

};




int main() {


    Circle obj;
    obj.calculateArea();
    obj.calculatePerimeter();

    Triangle obj1;
    obj1.calculateArea();
    obj1.calculatePerimeter();

    Rectangle obj2;
    obj2.calculateArea();
    obj2.calculatePerimeter();

    return 0;
}

/* Output :

Calculating Area Circle
Enter  radius of the circle : 3
area of cicle is : 28.26
Calculating perimeter of Circle
Enter  radius of the circle : 2
Perimeter of cicle is : 12.56
Calculating Area of triangle 
Enter  base of the Triangle : 5
Enter  height of the Triangle : 3
area of Triangle is : 7.5
Calculating perimeter of Triangle
Enter  side 1 of the Triangle : 3
Enter  side 2 of the Triangle : 2
Enter  side 3 of the Triangle : 4
Perimeter of Triangle is : 9
Calculating Area of Rectangle
Enter  base of the Rectangle : 4
Enter  height of the Rectangle : 4
area of Rectangle is : 16
Calculating perimeter of Rectangle
Enter  length of the Rectangle : 4
Enter  width  of the Rectangle : 3
Perimeter of Rectangle is : 14


*/