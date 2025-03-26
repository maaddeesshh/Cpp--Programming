#include <iostream>
using namespace std;

class Car {
public:  
    string brand;
    int speed;

    // Member function
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};
int main() {
    Car car1;  // Creating an object

    // Assign values
    car1.brand = "Toyota";
    car1.speed = 180;

    // Call function
    car1.showDetails();

    return 0;
}
