#include <iostream>
using namespace std;

int main () {
    int age;
    cout << "Please enter age: ";
    cin >> age;

    if (age >= 4) {
        cout << "Admit." << endl;
    } else {
        cout << "Do not admit." << endl;
    }
}