#include <iostream>
using namespace std;

int main() {
    //Declare an integer value
    int number;

    //Prompt the user to enter a number
    cout << "Enter an number ";
    cin >> number;

    //Display number on the screen
    cout << "You entered: " << number << endl;

    //Print error message if the user enters a non-integer value
    cerr << "Error";
    return 0;
}
