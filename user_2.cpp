#include <iostream>
#include <string>  // Required for string functions
using namespace std;

int main() {
    string name;

    cout << "Enter your full name: ";
    getline(cin, name);  // Reads the entire line

    cout << "Hello, " << name << "!" << endl;
    
    return 0;
}
