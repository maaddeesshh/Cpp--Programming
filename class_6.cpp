#include <iostream>
using namespace std;

class Student {
private:
    string name;
    double gpa;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }

    // Setter for GPA (with validation)
    void setGPA(double g) {
        if (g >= 0.0 && g <= 4.0) {
            gpa = g;
        } else {
            cout << "Invalid GPA! Must be between 0.0 and 4.0." << endl;
        }
    }

    // Getter for GPA
    double getGPA() {
        return gpa;
    }
};

int main() {
    Student s1;
    
    s1.setName("Eugene");
    s1.setGPA(3.8);  // Valid GPA
    cout << s1.getName() << " has a GPA of " << s1.getGPA() << endl;

    s1.setGPA(5.0);  // Invalid GPA, will not be set
    cout << s1.getName() << " has a GPA of " << s1.getGPA() << endl;

    return 0;
}
