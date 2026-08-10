#include <iostream>
using namespace std;

int main() {
    int age;
    int interestChoice;
    enum interests { Soccer = 1, Art, Music, Athletics, Toys };

    cout << "Preschool Admissions Program" << endl;
    cout << "-----------------------------" << endl;
    cout << "Enter the child's age: ";
    cin >> age;

    if (age >= 4 && age <= 10) {
        cout << "\nSelect the child's interest:" << endl;
        cout << "1. Soccer" << endl;
        cout << "2. Art" << endl;
        cout << "3. Music" << endl;
        cout << "4. Athletics" << endl;
        cout << "5. Toys" << endl;
        cout << "Enter the number of the interest: ";
        cin >> interestChoice;

        switch (interestChoice) {
            case 1:
                cout << "Assigned to the Soccer Play Group." << endl;
                break;
            case 2:
                cout << "Assigned to the Art Play Group." << endl;
                break;
            case 3:
                cout << "Assigned to the Music Play Group." << endl;
                break;
            case 4:
                cout << "Assigned to the Athletics Play Group." << endl;
                break;
            case 5:
                cout << "Assigned to the Toys Play Group." << endl;
                break;
            default:
                cout << "Assigned to other groups." << endl;
                break;
        }
    } else {
        cout << "Error: age input is not valid. Child must be between 4 and 10 years old." << endl;
    }

    return 0;
}
