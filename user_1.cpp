#include <iostream>
using namespace std;

int main() {
    int age;
    double salary;

    cout << "Enter your age: ";
    cin >> age;  // Takes integer input

    cout << "Enter your salary: ";
    cin >> salary;  // Takes float/double input

    cout << "You are " << age << " years old and earn $" << salary << endl;
    
    return 0;
}
