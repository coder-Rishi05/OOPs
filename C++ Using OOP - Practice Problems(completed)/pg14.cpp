/*14. Write a C++ program to create a class called "School" with attributes for students, teachers, and classes, and methods to add and remove students and teachers, and to create classes.*/

#include <iostream>
#include <string>
using namespace std;

class School {
private:
    string students[50];
    string teachers[10];
    string classes[10];
    int studentCount;
    int teacherCount;
    int classCount;

public:
    School() {
        studentCount = 0;
        teacherCount = 0;
        classCount = 0;
    }

    void addStudent(const string& studentName) {
        if (studentCount < 50) {
            students[studentCount++] = studentName;
            cout << "Student added: " << studentName << endl;
        } else {
            cout << "Cannot add more students, maximum limit reached." << endl;
        }
    }

    void removeStudent(const string& studentName) {
        for (int i = 0; i < studentCount; ++i) {
            if (students[i] == studentName) {
                for (int j = i; j < studentCount - 1; ++j) {
                    students[j] = students[j + 1];
                }
                --studentCount;
                cout << "Student removed: " << studentName << endl;
                return;
            }
        }
        cout << "Student not found: " << studentName << endl;
    }

    void addTeacher(const string& teacherName) {
        if (teacherCount < 10) {
            teachers[teacherCount++] = teacherName;
            cout << "Teacher added: " << teacherName << endl;
        } else {
            cout << "Cannot add more teachers, maximum limit reached." << endl;
        }
    }

    void removeTeacher(const string& teacherName) {
        for (int i = 0; i < teacherCount; ++i) {
            if (teachers[i] == teacherName) {
                for (int j = i; j < teacherCount - 1; ++j) {
                    teachers[j] = teachers[j + 1];
                }
                --teacherCount;
                cout << "Teacher removed: " << teacherName << endl;
                return;
            }
        }
        cout << "Teacher not found: " << teacherName << endl;
    }

    void addClass(const string& className) {
        if (classCount < 10) {
            classes[classCount++] = className;
            cout << "Class created: " << className << endl;
        } else {
            cout << "Cannot create more classes, maximum limit reached." << endl;
        }
    }
};

int main() {
    School school;

    school.addStudent("Ramesh");
    school.addStudent("Suresh");

    school.addTeacher("Mr. John");

    school.addClass("C++");
    school.addClass("CO");

    school.removeStudent("Suresh");
    school.removeTeacher("Mr. John");

    return 0;
}

/* Output :
  
Student added: Ramesh
Student added: Suresh
Teacher added: Mr. John
Class created: C++
Class created: CO
Student removed: Suresh
Teacher removed: Mr. John
  
  */
