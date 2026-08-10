#include <iostream>
using namespace std;

int main () {
    // Declare variable
    int number;

    // Timetable
    // Day of the Week  | Lectures
    // 1. Monday       | 1. BBIT 1106: Math for Business
    //                 | 2. BBIT 1102: Intro to Programs
    // 2. Tuesday      | 1. BBIT 1102: Intro to Programs
    //                 | 2. BBIT 1104: Intro to Ethics
    // 3. Wednesday    | 1. BBIT 1106: Math for Business
    //                 | 2. BBIT 1104: Theology
    //                 | 3. BBIT 1101: Fundamentals of IT
    // 4. Thursday     | 1. BBIT 1105: Accounting
    //                 | 2. BBIT 1101: Fundamentals of IT
    // 5. Friday       | 1. BBIT 1103: Business Computing

    // Prompt user for the day
    cout << "Enter the day of the week (1. Monday, 2. Tuesday, ..., 5. Friday): ";
    cin >> number;

    switch (number) {
        case 1:
            cout << "You entered Monday." << endl;
            cout << "Lectures:" << endl;
            cout << "1. BBIT 1106: Math for Business" << endl;
            cout << "2. BBIT 1102: Intro to Programs" << endl;
            break;
        case 2:
            cout << "You entered Tuesday." << endl;
            cout << "Lectures:" << endl;
            cout << "1. BBIT 1102: Intro to Programs" << endl;
            cout << "2. BBIT 1104: Intro to Ethics" << endl;
            break;
        case 3:
            cout << "You entered Wednesday." << endl;
            cout << "Lectures:" << endl;
            cout << "1. BBIT 1106: Math for Business" << endl;
            cout << "2. BBIT 1104: Theology" << endl;
            cout << "3. BBIT 1101: Fundamentals of IT" << endl;
            break;
        case 4:
            cout << "You entered Thursday." << endl;
            cout << "Lectures:" << endl;
            cout << "1. BBIT 1105: Accounting" << endl;
            cout << "2. BBIT 1101: Fundamentals of IT" << endl;
            break;
        case 5:
            cout << "You entered Friday." << endl;
            cout << "Lectures:" << endl;
            cout << "1. BBIT 1103: Business Computing" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 5." << endl;
    }

    return 0;
}