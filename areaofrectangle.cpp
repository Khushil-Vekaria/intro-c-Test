#include <iostream>

using namespace std;

int main() {
    // 1. Declaring variables
    int length;
    int width;
    int area;

    // Prompt the user to input the values
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // 2. Writing the program logic
    area = length * width;

    // Output the result
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}