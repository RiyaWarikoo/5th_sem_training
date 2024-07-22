// file1.cpp
#include <iostream>
using namespace std;
int globalVar = 0; // Definition of the global variable

void incrementGlobalVar() {
    globalVar++;
}

void printGlobalVar() {
    cout << "Global Variable: " << globalVar <<endl;
}