#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, adjective, noun, verb, place;

    // Asking for user input
    cout << "Enter a name: ";
    getline(cin, name);

    cout << "Enter an adjective: ";
    getline(cin, adjective);

    cout << "Enter a noun: ";
    getline(cin, noun);

    cout << "Enter a verb: ";
    getline(cin, verb);

    cout << "Enter a place: ";
    getline(cin, place);

    // Displaying the completed Mad Libs story
    cout << "\n--- Your Mad Libs Story ---\n";
    cout << "One day, " << name << " went to the " << place << ".\n";
    cout << "It was a very " << adjective << " day. \n";
    cout << "Suddenly, a " << noun << " appeared and started to " << verb << "!\n";
    cout << "It was the most exciting day of " << name << "'s life!\n";

    return 0;
}
