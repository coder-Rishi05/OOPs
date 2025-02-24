/*2. Write a C++ program to create a class called "Dog" with a name and breed attribute. Create two instances of the "Dog" class, set their attributes using the constructor and modify the attributes using the setter methods and print the updated values.*/

#include <iostream>

using namespace std;

class Dog
{
  char name[10];
  char breed[10];

public:
       Dog(){
         cout<< " Enter your dog name : ";
         cin>> name;
         cout<< " Enter dog breed : ";
         cin>> breed;
       }
       void display(){
        cout<<"The name of the dog is "<<name<<endl;
        cout<<"The breed of the dog is "<<breed<<endl;
       }
};

int main()
{
cout<<"Enter Data : "<<endl;
	Dog obj1,obj2;
	cout<<endl<<"Entered Data : ";
	obj1.display();
	obj2.display();
    return 0;
};

/*  Output : 

Enter Data : 
 Enter your dog name : Sheru
 Enter dog breed : Pitbull
 Enter your dog name : Wolfy
 Enter dog breed : Husky

Entered Data : The name of the dog is Sheru
The breed of the dog is Pitbull
The name of the dog is Wolfy
The breed of the dog is Husky

*/