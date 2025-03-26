#include <iostream>
using namespace std;

int main() {
    int num;

    // Using do-while loop to ensure at least one iteration
    do {
        cout << "Enter a number (0 to exit): ";
        cin >> num;

        // if (num != 0) {
        //     cout << "You entered: " << num << endl;
        // }

    } while (num != 0);  // Loop continues until user enters 0

    cout << "Program exited!" << endl;

    return 0;
}
