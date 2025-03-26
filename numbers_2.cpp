#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num = 25.0;
    cout << "Square root of " << num << ": " << sqrt(num) << endl;
    cout << "Power: 2^3 = " << pow(2, 3) << endl;
    cout << "Absolute: " << abs(-10) << endl;
    cout << "Ceil(4.2): " << ceil(4.2) << endl;
    cout << "Floor(4.8): " << floor(4.8) << endl;
    cout << "Round(4.6): " << round(4.6) << endl;
    cout << fmax(3,10) << endl;
    cout << fmin(3,10) << endl; 

    return 0;
}
