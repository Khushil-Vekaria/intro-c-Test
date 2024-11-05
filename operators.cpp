#include <iostream>
using namespace std;

int main() {
    int num1, num2;
      bool boolVar1= true;
      bool boolVar2= false;
    //prompt users to input 2 digits.
    cout << "Enter the first num: ";
    cin >> num1;

    cout << "Enter the second num: ";
    cin >> num2;

    cout << "You entered " << num1 << " and " << num2 << endl;

    // Arithmetic operators


cout << "Sum of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
cout << "Difference of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
cout << "Product of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
cout << "Division of " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
cout << "Modulus of " << num1 << " % " << num2 << " = " << num1 % num2 << endl;
// Increment operator '++' as a prefix
cout << "Increment num1 by 1: " << ++num1 << endl;
// Increment operator '++' as a postfix
cout << "Increment num1 by 1: " << num1++ << endl;
// Decrement operator '--' as a prefix
cout << "Decrement num1 by 1: " << --num1 << endl;
// Decrement operator '--' as a postfix
cout << "Decrement num1 by 1: " << num1-- << endl;
//increment and assign operations
num1+=3; //this is the same as num1 = num1 + 3
cout << "Incrementand assign num1 by 3: " << num1 << endl;


// Comparison operators

//greater than operator
cout << num1 << " greater than " << num2 << " = " << (bool)(num1 > num2) << endl;
//less than operator
cout << num1 << " less than " << num2 << " = " << (bool)(num1 < num2) << endl;
//equal to operator
cout << num1 << " equal to " << num2 << " = " << (bool)(num1 == num2) << endl;
// not equal to operator
cout << num1 << " not equal to " << num2 << " = " << (bool)(num1 != num2) << endl;

//boolean operators
// Boolean operator '&&'
cout << boolVar1 << " && " << boolVar2 << " = " << (boolVar1 && boolVar2) << endl;

// Boolean operator '||'
cout << boolVar1 << " || " << boolVar2 << " = " << (boolVar1 || boolVar2) << endl;

// Boolean operator '!'
cout << "!" << boolVar1 << " = " << !boolVar1 << endl;  

// Declare a pointer
int *ptr = nullptr;

// Assign a value to the pointer
ptr = &num1;

// Output address of num1
cout << "Address of num1 = " << &num1 << endl;

// Dereference the pointer to get the value at the memory location
cout << "Value at memory location pointed by ptr = " << *ptr << endl;
return 0;
}