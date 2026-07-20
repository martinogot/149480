#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //writing to a file
    ofstream outputFile("output.txt");
    outputFile << "This file program was written by Dev." << endl;
    outputFile.close();

    //Reading from a file
    ifstream inputFile("output.txt");
    string content;
    while (std::getline(inputFile, content)) {
        cout << content << endl;
    }
    inputFile.close();
}