#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    // Constructor
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    // Member function to display car details
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

// Function that takes a Car object as a parameter
void displayCar(Car c) {
    cout << "Displaying car details from function: ";
    c.showDetails();
}

int main() {
    Car car1("Honda", 200);  // Create an object
    displayCar(car1);  // Pass object to function

    return 0;
}
