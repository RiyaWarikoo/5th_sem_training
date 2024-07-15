//USING 5 STRING FUNCTIONS 

#include <iostream>
#include <string>
using namespace std;

void demonstrateStringFunctions() {
    // Initial string
    string str = "Hello, World!";

    // 1. Length of the string
    cout << "Length of the string: " << str.length() << endl;

    // 2. Substring: Extract "World" from "Hello, World!"
    string substr = str.substr(7, 5);
    cout << "Substring (7, 5): " << substr << endl;

    // 3. Find: Find the position of "World" in the string
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "Found 'World' at position: " << pos << endl;
    } else {
        cout << "'World' not found" << endl;
    }

    // 4. Replace: Replace "World" with "C++"
    str.replace(7, 5, "C++");
    cout << "After replace: " << str << endl;

    // 5. Append: Append a string to the end
    str.append(" Welcome to programming!");
    cout << "After append: " << str << endl;
}

int main() {
    demonstrateStringFunctions();
    return 0;
}
