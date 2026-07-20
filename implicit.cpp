#include <iostream>
using namespace std;

int main() {
	double d = 15.5; // original double value
	int i = d;       // implicit cast from double to int (fraction truncated)

	cout << "double d = " << d << "\n";
	cout << "int i (after implicit cast) = " << i << "\n";
	return 0;
}
