#include <iostream>
using namespace std;

int main()
{
    int luckyNumber[] = {2, 5, 7, 8};  // Initial array

    cout << "My lucky numbers are: " << luckyNumber[2] << " and " << luckyNumber[3] << endl;

    // Modifying the first element
    luckyNumber[0] = 4;
    cout << "Updated first lucky number: " << luckyNumber[0] << endl;

    // Taking user input for luckyNumber[1]
    cout << "Enter a number: ";
    cin >> luckyNumber[1];

    // Printing the updated array
    cout << "Updated lucky numbers: ";
    for (int i = 0; i < 4; i++)  // Looping through the array
    {
        cout << luckyNumber[i] << " ";
    }
    cout << endl;

    return 0;
}
