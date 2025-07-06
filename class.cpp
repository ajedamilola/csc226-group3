#include <iostream>
using namespace std;

// Class definition
class Student {
public:
    // Properties
    string name;
    int age;
    float gpa;

    // Method to display student info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }

    // Method to update GPA
    void updateGPA(float newGPA) {
        gpa = newGPA;
    }
};

int main() {
    // Creating an object of Student
    Student s1;
    s1.name = "Damilola";
    s1.age = 20;
    s1.gpa = 4.5;

    s1.displayInfo(); // Call method

    s1.updateGPA(4.8); // Update GPA
    cout << "\nAfter GPA update:\n";
    s1.displayInfo();

    return 0;
}
