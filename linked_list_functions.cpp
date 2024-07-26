#include <iostream>
#include <list>

using namespace std;

void reverseList(list<int>& numbers) {
    numbers.reverse();
    cout << "Reversed the list." << endl;
}

void sortList(list<int>& numbers) {
    numbers.sort();
    cout << "Sorted the list." << endl;
}

void uniquelist(list<int>& numbers) {
    numbers.unique();
    cout << "Removed duplicates from the list." << endl;
}

void checkEmpty(const list<int>& numbers) {
    if (numbers.empty()) {
        cout << "The list is empty." << endl;
    } else {
        cout << "The list is not empty." << endl;
    }
}

void getSize(const list<int>& numbers) {
    cout << "The size of the list is: " << numbers.size() << endl;
}

void clearList(list<int>& numbers) {
    numbers.clear();
    cout << "Cleared the list." << endl;
}

void mergeLists(list<int>& numbers1, list<int>& numbers2) {
    numbers1.merge(numbers2);
    cout << "Merged the second list into the first list." << endl;
}

void printList(const list<int>& numbers) {
    if (numbers.empty()) {
        cout << "The list is empty." << endl;
    } else {
        cout << "Current list: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    list<int> numbers = {1, 2, 3, 4, 5};
    list<int> numbers2 = {10, 20, 30}; // Second list for merging
    
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Reverse list\n";
        cout << "2. Sort list\n";
        cout << "3. Unique list\n";
        cout << "4. Check if list is empty\n";
        cout << "5. Get size of list\n";
        cout << "6. Clear list\n";
        cout << "7. Merge another list\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reverseList(numbers);
                printList(numbers);
                break;
            case 2:
                sortList(numbers);
                printList(numbers);
                break;
            case 3:
                uniquelist(numbers);
                printList(numbers);
                break;
            case 4:
                checkEmpty(numbers);
                break;
            case 5:
                getSize(numbers);
                break;
            case 6:
                clearList(numbers);
                printList(numbers);
                break;
            case 7:
                mergeLists(numbers, numbers2);
                printList(numbers);
                break;
            case 8:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 8);

    return 0;
}
