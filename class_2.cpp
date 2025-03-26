#include <iostream>
#include <string> // Include string header
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

    void showDetails() { // member function
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car1("Honda", 200); // Constructor is automatically called
    car1.showDetails();

    return 0;
}
