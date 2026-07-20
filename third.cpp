#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    /*Writing to a file. 
    output.txt file will be created if it does not exist in the directory of this source file*/
    ofstream outputFile("output.txt");
    outputFile << "Writing to a file." << endl;
    outputFile.close(); 
    
    //Reading from a file.
    ifstream inputFile("output.txt");
    string content;
    while (std::getline(inputFile, content)) {
        cout << content << endl;
    }
    inputFile.close(); //Close the file after reading its content
    return 0;
}