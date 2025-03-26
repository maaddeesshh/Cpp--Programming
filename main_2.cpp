#include <iostream>  // Include input-output stream library
using namespace std; // Use the standard namespace

int main() {
    int num1, num2, sum;  // Declare three integer variables

    // Ask for user input
    cout << "Enter first number: ";
    cin >> num1;  // Read first number from user

    cout << "Enter second number: ";
    cin >> num2;  // Read second number from user

    sum = num1 + num2;  // Perform addition

    // Display the result
    cout << "The sum is: " << sum << endl;

    return 0;  // Indicate successful program execution
}
