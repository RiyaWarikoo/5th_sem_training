#include <iostream>
#include <fstream>
#include <string>
#include <sstream> // For stringstream

using namespace std;

int main() {
    string line;
    int sum = 0;
    int count = 0;

    // Opening a text file for writing
    ofstream my_file("example.txt", ios::app);
    if (!my_file) {
        cout << "Unable to open file" << endl;
        return 1;
    }

    // Write to the file
    my_file << "Mohan 30\n";
    my_file << "Rajesh 40\n";
    my_file << "Jitu 50\n";

    // Close the file after writing
    my_file.close();

    // Opening the same file for reading
    ifstream read_file("example.txt");

    // Check if the file has been opened successfully
    if (!read_file.is_open()) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    // Read from the file line by line
    while (getline(read_file, line)) {
        cout << line << endl;

        // Extract the number from each line
        stringstream ss(line);
        string name;
        int number;
        
        if (ss >> name >> number) {
            sum += number;
            count++;
        }
    }

    // Close the file after reading
    read_file.close();

    // Calculate and display the average
    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "The average of the numbers is: " << average << endl;
    } else {
        cout << "No numbers found in the file." << endl;
    }

    return 0;
}