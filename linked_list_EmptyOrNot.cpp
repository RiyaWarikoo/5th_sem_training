#include <iostream>
#include <list>

using namespace std;

void addElement(list<int>& numbers, int element, int position) {
    if (numbers.empty()) {
        numbers.push_back(element);
        cout << "List was empty. Added element " << element << " to the list." << endl;
    } else {
        if (position <= 0 || position > numbers.size() + 1) {
            cout << "Invalid position. Adding element " << element << " to the end of the list." << endl;
            numbers.push_back(element);
        } else {
            list<int>::iterator itr = numbers.begin();
            advance(itr, position - 1); 
            numbers.insert(itr, element);
            cout << "Added element " << element << " at position " << position << "." << endl;
        }
    }
}

void printList(const list<int>& numbers) {
    cout << "Current list: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    list<int> numbers;
    int choice, element, position;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add element\n";
        cout << "2. Display list\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to add: ";
                cin >> element;
                cout << "Enter position to add (1-based index): ";
                cin >> position;
                addElement(numbers, element, position);
                break;
            case 2:
                printList(numbers);
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 3);

    return 0;
}
