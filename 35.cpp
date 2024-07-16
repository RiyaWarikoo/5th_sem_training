#include <iostream>
#include <stack>
using namespace std;

void displayMenu() {
    cout << "\nMenu:" << endl;
    cout << "1. Find Size" << endl;
    cout << "2. Insert Element" << endl;
    cout << "3. Delete Element" << endl;
    cout << "4. Top Element" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    stack<int> s;
    int choice, element;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of stack: " << s.size() << endl;
                break;

            case 2:
                cout << "Enter element to insert: ";
                cin >> element;
                s.push(element);
                cout << element << " inserted into the stack." << endl;
                break;

            case 3:
                if (!s.empty()) {
                    cout << "Element " << s.top() << " is deleted from the stack." << endl;
                    s.pop();
                } else {
                    cout << "Stack is empty. Cannot delete element." << endl;
                }
                break;

            case 4:
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;

            case 5:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
