/*21. Create a class showing an example of parameterized constructor.*/


#include <iostream>
using namespace std;

class ParaMeter {
private:
	int x, y;

public:
	
	ParaMeter(int a, int b)
	{
		x = a;
		y = b;
	}
void display(){
    cout<<"The value of X is : "<<x <<endl;
    cout<<"The value of Y is : "<<y;
}
	
};

int main()
{
	ParaMeter p1(10, 15);
    p1.display();
	return 0;
}

/* Output:

The value of X is : 10
The value of Y is : 15

 */