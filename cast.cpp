#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    char ch = static_cast<char>(number);

    cout << "The integer " << number << " becomes the character '" << ch << "'." << endl;

    return 0;
}