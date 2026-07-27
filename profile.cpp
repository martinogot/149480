#include <iostream>
using namespace std;

int main() {
    string firstName;
    string lastName;
    string favouriteMeal;
    string favouriteMovie;
    string school;
    string course;
    string aboutMe;

    //First name
    cout << "Enter your first name: ";
    cin >> firstName;

    //Last name
    cout << "Enter your last name: ";
    cin >> lastName;

    //Full name
    string fullName = firstName + " " + lastName;

    //Favourite meal
    cout << "Enter your favourite meal: ";
    cin >> favouriteMeal;

    //Favourite movie
    cout << "Enter your favourite movie: ";
    cin >> favouriteMovie;

    //School
    cout << "Enter your school: ";
    cin >> school;

    //Course
    cout << "Enter your course: ";
    cin >> course;

    //About me
    cout << "Enter something about yourself: ";
    cin >> aboutMe;

    //Output the user profile
    cout << "\n--- User Profile ---\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Full Name: " << fullName << "\n";
    cout << "Favourite Meal: " << favouriteMeal << "\n";
    cout << "Favourite Movie: " << favouriteMovie << "\n";
    cout << "School: " << school << "\n";
    cout << "Course: " << course << "\n";
    cout << "About Me: " << aboutMe << "\n";

    return 0;
}
