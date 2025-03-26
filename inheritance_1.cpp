#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand = "Toyota";

    void honk() {
        cout << "Beep beep!\n";
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model = "Corolla";
};

int main() {
    Car myCar;
    cout << "Brand: " << myCar.brand << endl;  // Inherited from Vehicle
    cout << "Model: " << myCar.model << endl;
    myCar.honk(); // Inherited function

    return 0;
}
