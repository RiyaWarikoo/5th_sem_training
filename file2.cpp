// file2.cpp
#include <iostream>
using namespace std;
// Declaration of the global variable
extern int globalVar;

void incrementGlobalVar();
void printGlobalVar();

int main() {
    printGlobalVar();     // Should print: Global Variable: 0
    incrementGlobalVar();
    printGlobalVar();     // Should print: Global Variable: 1
    incrementGlobalVar();
    printGlobalVar();     // Should print: Global Variable: 2
    return 0;
}
