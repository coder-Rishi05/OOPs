/*22. Create a class showing an example of copy constructor.*/

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;

public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}

	Point(const Point& p1)
	{
		x = p1.x;
		y = p1.y;
	}

	int getX() { 
        return x; 
        }
	int getY() {
         return y;
          }
};

int main()
{
	Point p1(10, 15); 
	Point p2 = p1;

	cout << "p1.x = " << p1.getX()
		<< ", p1.y = " << p1.getY();
	cout << "\np2.x = " << p2.getX()
		<< ", p2.y = " << p2.getY();
	return 0;
}

/* OUtput :
p1.x = 10, p1.y = 15
p2.x = 10, p2.y = 15
*/