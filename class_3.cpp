#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // Default constructor
    Car() {
        brand = "Unknown";
        speed = 0;
    }

    // Parameterized constructor
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car1("Toyota", 180); // Object with attributes
    Car car2; // Object without attributes (default constructor)

    cout << "Car 1 details: ";
    car1.showDetails();

    cout << "Car 2 details: ";
    car2.showDetails(); // Will print "Unknown" and 0

    return 0;
}
