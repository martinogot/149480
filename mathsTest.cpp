#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x=10, y=16;

    cout << "The absolute value of x is: " << abs(x) << endl;
    cout << "The square root of y is: " << sqrt(y) << endl;

    double base = 2.0, exponent = 3.0, z=2.178;
    
    cout << "2 ^ 3 = " << pow(base, exponent) << endl;
    cout << "log(2.178) = " << log(z) << endl;
}