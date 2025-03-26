#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double gpa;

    // Constructor
    Student(string n, double g) {
        name = n;
        gpa = g;
    }
};

// Function to check if a student has honors
bool hasHonors(Student s) {
    return s.gpa >= 3.5;
}

int main() {
    // Creating two Student objects
    Student student1("Alice", 3.8);
    Student student2("Bob", 3.2);

    // Checking for honors
    cout << student1.name << (hasHonors(student1) ? " has honors." : " does not have honors.") << endl;
    cout << student2.name << (hasHonors(student2) ? " has honors." : " does not have honors.") << endl;

    return 0;
}
