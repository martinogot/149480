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

    std::cout << "\n--- User Profile ---\n";
    std::cout << "First Name: " << firstName << "\n";
    std::cout << "Last Name: " << lastName << "\n";
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Favourite Meal: " << favouriteMeal << "\n";
    std::cout << "Favourite Movie: " << favouriteMovie << "\n";
    std::cout << "School: " << school << "\n";
    std::cout << "Course: " << course << "\n";
    std::cout << "About Me: " << aboutMe << "\n";

    return 0;
}
