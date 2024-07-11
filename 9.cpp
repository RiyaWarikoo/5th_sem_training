#include <iostream>
using namespace std;

// Function to divide two numbers
int Div(int a, int b) {
    return a/b;
}

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the sub function and display the result
    int result = Div(num1, num2);
    cout << "The result of division is: " << result << endl;

    return 0;
}

//polymorphism means many forms. it allows objects to be treated as instances of their parent class rather than actual class
//function overloading means multiple functions can have the same name with different parameters
// runtime polymorphism



    