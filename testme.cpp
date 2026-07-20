#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    // Get the current time
    auto start = high_resolution_clock::now();

    // Get the end time
    auto end = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<microseconds>(end - start);

    // Output the duration in microseconds
    cout << "Time taken: " << duration.count() << " microseconds" << endl;

    return 0;
}