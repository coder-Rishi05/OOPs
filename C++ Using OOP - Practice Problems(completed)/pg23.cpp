/*23. Create a class entering the rollno, name and class of the student from user but rollno should be automatically generated as we enter the information of 10 students*/

#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    static int rollCounter;
    int rn; 
    string nname; 
    string clas;

public:
    Student() {
        rn = ++rollCounter;
    }

    Student(string name, string className) : nname(name), clas(className) {
        rn = ++rollCounter;
    }

    void display() {
        cout << "Roll No: " << rn << ", Name: " << nname << ", Class: " << clas << endl;
    }
};

int Student::rollCounter = 0;

int main() {
    Student students[10];
    string name, cName;

    for (int i = 0; i < 10; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name);
        cout << "Enter class of student " << i + 1 << ": ";
        getline(cin, cName);
        students[i] = Student(name, cName);
    }
    cout << "Students Information:" << endl;
    for (int i = 0; i < 10; ++i) {
        students[i].display();
    }

    return 0;
}

/* Output : 

Enter name of student 1: st1
Enter class of student 1: BCA
Enter name of student 2: st2
Enter class of student 2: BCOM
Enter name of student 3: st3
Enter class of student 3: BCA-II
Enter name of student 4: st4
Enter class of student 4: ENGLISH
Enter name of student 5: st5
Enter class of student 5: SCIENCE
Enter name of student 6: st6
Enter class of student 6: COMMERSE
Enter name of student 7: st7
Enter class of student 7: HINDI
Enter name of student 8: st8
Enter class of student 8: ENGLISH
Enter name of student 9: st9
Enter class of student 9: SST 
Enter name of student 10: st10
Enter class of student 10: PUNJABI
Students Information:
Roll No: 11, Name: st1, Class: BCA
Roll No: 12, Name: st2, Class: BCOM
Roll No: 13, Name: st3, Class: BCA-II
Roll No: 14, Name: st4, Class: ENGLISH
Roll No: 15, Name: st5, Class: SCIENCE
Roll No: 16, Name: st6, Class: COMMERSE
Roll No: 17, Name: st7, Class: HINDI
Roll No: 18, Name: st8, Class: ENGLISH
Roll No: 19, Name: st9, Class: SST
Roll No: 20, Name: st10, Class: PUNJABI


*/