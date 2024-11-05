#include <iostream>
#include <string>
using namespace std;

int main (){
    string myName,description;

    cout << "Please enter your fullname:";
    getline(cin, myName);

    cout<< "Please enter a brief description of yourself:";
    getline(cin ,description);

    cout << "Hello, my name is " << myName ;
    cout << " and I like " << description << endl;
    }
    