/* 1. Write a C++ program to create a class called "Person" with a name and age attribute. Create two instances of the "Person" class, set their attributes using the constructor, and print their name and age */

#include <iostream>

using namespace std;

class Person
{ 
  char name[10];
  int age;

public:
       Person(){
         cout<< " Enter your name : ";
         cin>> name;
         cout<< " Enter your age : ";
         cin>> age;
       }
       void Name(){
        cout<<"The name of the person is "<<name<<endl;
       }
       void Age(){
         cout<<"The age of the person is "<<age<<endl;
       }

};

int main()
{
Person obj1,obj2;
obj1.Name();
obj2.Age();
    return 0;
};

/*

Output : 

Enter your name : Ragav
 Enter your age : 18
 
 Enter your name : Rishabh
 Enter your age : 18
  z
The name of the person is Ragav
The age of the person is 18

*/