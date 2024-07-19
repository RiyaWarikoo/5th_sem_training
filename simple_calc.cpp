#include <iostream>
#include <map>
#include <functional>
using namespace std;

class Calculator {
public:
    Calculator() {
        operations['+'] = [](double a, double b) { return a + b; };
        operations['-'] = [](double a, double b) { return a - b; };
        operations['*'] = [](double a, double b) { return a * b; };
        operations['/'] = [](double a, double b) {
            if (b != 0) return a / b;
            else {
                cerr << "Error: Division by zero!" << endl;
                return 0.0;
            }
        };
    }

    double calculate(double a, double b, char op) {
        if (operations.find(op) != operations.end()) {
            return operations[op](a, b);
        } else {
            cerr << "Error: Unsupported operation!" << endl;
            return 0.0;
        }
    }

private:
    map<char, function<double(double, double)>> operations;
};

int main() {
    Calculator calc;
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result = calc.calculate(num1, num2, op);
    cout << "Result: " << result << endl;

    return 0;
}
