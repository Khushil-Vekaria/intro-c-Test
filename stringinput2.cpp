#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName, favoriteMeal, favoriteMovie;

    // Input user information
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Enter your favorite meal: ";
    getline(cin, favoriteMeal);
    cout << "Enter your favorite movie: ";
    getline(cin, favoriteMovie);

    // merge first name and last name to get full name
    string fullName = firstName + " " + lastName;

    // Display the profile
    cout << "\n--- User Profile ---\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Full Name: " << fullName << "\n";
    cout << "Favorite Meal: " << favoriteMeal << "\n";
    cout << "Favorite Movie: " << favoriteMovie << "\n";

    return 0;
}