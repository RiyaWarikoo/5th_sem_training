#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    // Dynamically allocate memory for the 2D array
    int** arr = new int*[row];
    for (int i = 0; i < row; ++i) {
        arr[i] = new int[col];
    }

    // Input values for the array
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> arr[i][j];
        }
    }

    // Print the array
    cout << "The array is:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the memory
    for (int i = 0; i < row; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
