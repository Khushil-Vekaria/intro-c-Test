#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;

    cout << "Enter the child's age: ";
    cin >> age;

    if (age >= 4) {
        cout << "The child is eligible for school admission." << endl;
    } else {
        cout << "using ternary operator:" << endl;
        string message = (age < 4 ? "The child is too young for school admission." : "The child is eligible for school admission.");
        cout << message << endl;
        cout << message << endl;
        
    }
    return 0;
}