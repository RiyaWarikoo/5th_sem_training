// sorting algorithm

#include <iostream>
using namespace std;

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target element
        }
    }
    return -1; // Return -1 if the target element is not found
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {44, 5, 67, 12, 89, 45};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    // Sort the array using bubble sort
    bubbleSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);

    // Search for the element 89 in the sorted array
    int target = 89;
    int index = linearSearch(arr, n, target);

    if (index != -1) {
        cout << "Element " << target << " found at index: " << index << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
