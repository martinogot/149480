#include <iostream>
using namespace std;

int main () {
    //Variable declaration and initialization
    int num = 30; 
    int *ptr = &num; //pointer variable declaration

    //Output
    cout << "Value of num: " << num << endl;
    cout << "Address of num:" << ptr << endl;
    cout << "Address of num accessed directly: " << &num << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

}