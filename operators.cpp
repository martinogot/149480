#include <iostream>
using namespace std;

int main(){
    //variables
    int num1=8, num2=4;

    cout << "operators in C++" << endl;
    cout << "Arithmetic/Mathematical Operators" << endl;
    cout << "Addition e.g. " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "Subtraction e.g. " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << "Multiplication e.g. " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << "Division e.g. " << num1 << " / " << num2 << " = " << num1/num2 << endl;
    cout << "Modulus e.g. " << num1 << " % " << num2 << " = " << num1%num2 << endl;
    cout << endl;
    cout << " Assiggnment Operators " << endl;
    cout << "Simple assignment (=) " << endl;
    cout << "Add and assign (+=) e.g. " << num1 << " += " << num2 << " = " << (num1 += num2) << endl;
    cout << "Subtract and assign (-=) e.g. " << num1 << " -= " << num2 << " = " << (num1 -= num2) << endl;
    cout << "etc " << endl;
    cout << endl; 
    cout << " Comparison/Relational Operators " << endl;
    cout << " Greater than (>) e.g. " << num1 << " > " << num2 << " = " << (num1 > num2) << endl;
    cout << " Less than (<) e.g. " << num2 << " < " << num1 << " = " << (num1 < num2) << endl;
    cout << " Greater than or equal to (>=) e.g. " << num1 << " >= " << num2 << " = " << (num1 >= num2) << endl;
    cout << " Less than or equal to (<=) e.g. " << num2 << " <= " << num1 << " = " << (num1 <= num2) << endl;
    cout << " Equal to (==) e.g. " << num1 << " == " << num2 << " = " << (num1 == num2) << endl;
    cout << " Not equal to (!=) e.g. " << num1 << " != " << num2 <<" = " << (num1 != num2) << endl;
    cout << endl; 
    cout << " Boolean/Logical Operators " << endl;
    cout << " Logical AND (&&) e.g. " << num1 << " && " << num2 << " = " << (num1&&num2) << endl;
    cout << " Logical OR (||) e.g. " << num1 << " || " << num2 << " = " << (num1||num2) << endl;
    cout << " Logical NOT (!) e.g. !(" << num1 << ") = " << (!num1) << endl;
    cout << endl; 
    cout << " Pointer Operators " << endl;
    int* num3;
    cout << " Address of (&) e.g. &" << num1 << " = " << &num1 << endl;
    cout << " Dereference (*) e.g. *" << &num1 << " = " << (*&num1) << endl;

}