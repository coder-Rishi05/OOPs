/*10. Write a C++ program to create a class called "Student" with a name, grade, and courses attributes, and methods to add and remove courses.*/

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int grade;
    string courses[10]; // Assuming a maximum of 10 courses

public:
   
    Student(string name, int grade) {
        this->name = name;
        this->grade = grade;
    }

    void addCourse(const string& course) {
        for (int i = 0; i < 10; ++i) {
            if (courses[i].empty()) {
                courses[i] = course;
                cout << "Course \"" << course << "\" added successfully." << endl;
                return;
            }
        }
        cout << "Cannot add more courses. Course limit reached." << endl;
    }

    void removeCourse(const string& course) {
        for (int i = 0; i < 10; ++i) {
            if (courses[i] == course) {
                courses[i] = ""; // Remove the course
                cout << "Course \"" << course << "\" removed successfully." << endl;
                return;
            }
        }
        cout << "Course \"" << course << "\" not found." << endl;
    }

    void displayInfo() const {
        cout << "Name: " << name << ", Grade: " << grade << endl;
        cout << "Courses: ";
        bool empty = true;
        for (int i = 0; i < 10; ++i) {
            if (!courses[i].empty()) {
                if (!empty)
                    cout << ", ";
                cout << courses[i];
                empty = false;
            }
        }
        if (empty)
            cout << "No courses registered." << endl;
        else
            cout << endl;
    }
};

int main() {
    
    Student student("John Doe", 10);

    student.addCourse("Math");
    student.addCourse("Science");
    student.addCourse("History");

    student.displayInfo();

    student.removeCourse("Science");

    student.displayInfo();

    return 0;
}

/* Output :

Course "Math" added successfully.
Course "Science" added successfully.
Course "History" added successfully.
Name: John Doe, Grade: 10
Courses: Math, Science, History
Course "Science" removed successfully.
Name: John Doe, Grade: 10
Courses: Math, History

 */