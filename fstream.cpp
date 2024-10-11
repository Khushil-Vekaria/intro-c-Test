#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    /*Writing to another file. output.txt file will be created
    in the directory of this source file*/
    ofstream outFile("output.txt");
    outFile << "Writing to another file" << endl;
    outFile.close();

    // Reading from a file
    ifstream inFile("output.txt");
    string content;
    while (std::getline(inFile, content))
    {
        cout<< content << endl;
    }
    inFile.close(); //close the file after reading its contents

    return 0;
}