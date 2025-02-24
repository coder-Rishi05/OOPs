/*20. Create a class showing an example of default constructor.*/

#include <iostream>
using namespace std;
class student {
   
    char name[50];
    int roll;
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> roll;
        cout << "Enter the Name:";
        cin >> name;
        
    }
 
    void display()
    {
        cout << endl << roll << "\t" << name << "\t";
    }
};
 
int main()
{
    student s1; 
    s1.display();
    return 0;
}

/* Output :

Enter the RollNo: 4122
Enter the Name:Rishabh

4122    Rishabh
 */