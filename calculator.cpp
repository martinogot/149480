#include <iostream>
using namespace std;

int main() {
    double num1=5, num2=3;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Addition: " << (num1 + num2) << "\n";
    cout << "Subtraction: " << (num1 - num2) << "\n";
    cout << "Multiplication: " << (num1 * num2) << "\n";
    cout << "Division: " << (num1 / num2) << "\n";

    return 0;
}
