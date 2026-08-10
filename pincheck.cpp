#include <iostream>
#include <string>

using namespace std;

int main() {
    string correctPin = "1234";
    string userPin;
    int wrongAttempts = 0;
    int maxAttempts = 3;

    cout << "Enter your PIN: ";
    
    while (wrongAttempts < maxAttempts) {
        cin >> userPin;
        
        if (userPin == correctPin) {
            cout << "PIN is correct!" << endl;
            return 0;
        } else {
            wrongAttempts++;
            cout << "Wrong PIN! Attempts: " << wrongAttempts << "/" << maxAttempts << endl;
            
            if (wrongAttempts < maxAttempts) {
                cout << "Enter your PIN: ";
            }
        }
    }
    
    cout << "Maximum attempts reached. Access denied." << endl;
    return 0;
}
