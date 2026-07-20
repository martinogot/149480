//A program to demonstrate the use of variables in C++
#include <iostream>
using namespace std;

//Declare a global variable (declared outside of any function)
int globalVar = 10;

//Constant variable (declared with the const keyword)
const int CONSTANT_VAR = 20;

int main() {
    //Declare a local variable (declared inside the main function)
    int age;

    //Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    //Display the user's age on the screen
    cout << "You are " << age << " years old." << endl;

    return 0;
}