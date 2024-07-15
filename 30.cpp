#include <iostream>
#include <array>
#include <algorithm>  // Include the algorithm header for std::count and std::sort

using namespace std;

int main() {
    // STL array with 2 instances of 7 and correct size
    array<int, 5> a = {3, 4, 7, 2, 7};
    int size = a.size();  // Correct usage of size() method
    cout << "Array size: " << size << endl;

    // Printing all elements of the array
    cout << "Original array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << a[i] << endl;
    }

    // Using predefined functions
    cout << "Element at index 3: " << a.at(3) << endl;
    bool trueFalse = a.empty();
    cout << "Is the array empty (1 for true, 0 for false): " << trueFalse << endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;

    // Count occurrences of 7
    int count_7 = count(a.begin(), a.end(), 7);
    cout << "The number 7 occurs " << count_7 << " times in the array." << endl;

    // Sort the array in ascending order
    sort(a.begin(), a.end());
    cout << "Sorted array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element at index " << i << ": " << a[i] << endl;
    }

    return 0;
}
