#include <iostream>
using namespace std;

// Function to display the day based on user input
void displayDay(int num) {
    switch (num) {
        case 0:
            cout << "Today is Sunday" << endl;
            break;
        case 1:
            cout << "Today is Monday" << endl;
            break;
        case 2:
            cout << "Today is Tuesday" << endl;
            break;
        case 3:
            cout << "Today is Wednesday" << endl;
            break;
        case 4:
            cout << "Today is Thursday" << endl;
            break;
        case 5:
            cout << "Today is Friday" << endl;
            break;
        case 6:
            cout << "Today is Saturday" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }
}

int main() {
    int num;
    cout << "Enter a number (0-6): " << endl;
    cin >> num;

    // Call the function
    displayDay(num);

    return 0;
}
