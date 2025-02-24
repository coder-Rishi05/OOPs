/* Write a C++ program to create a class called Student with private instance variables student_id, student_name, and grades. Provide public getter and setter methods to access and modify the student_id and student_name variables. However, provide a method called addGrade() that allows adding a grade to the grades variable while performing additional validation.*/

#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
private:
    //details
    int student_id;
    char student_name[20];
    char grades ;
public:

void getter (){
    cout<<"Enter your Student id  : "<<endl;
    cin>> student_id;
    cout<<"Enter your name : "<<endl;
    cin>>student_name;
}

void setter(){
//  cin>> student_id;
//  cin>>student_name;
 cout<<"The student ID is : "<<student_id<<endl;
 cout<<"The name of the student is : "<<student_name<<endl;
}
    
void addGrade(){
    cout<<"Enter your grades "<<endl;
    cin>>grades;
}

};

int main(){
    Student obj1;
    obj1.getter();
    obj1.setter();
    obj1.addGrade();
return 0;
}

/*Output :

Enter your Student id  : 
4214
Enter your name : 
Rishabh
The student ID is : 4214
The name of the student is : Rishabh

 */