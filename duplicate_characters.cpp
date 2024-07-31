#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
#include <cctype> // For isalpha

using namespace std;

int main() {
    string line;
    unordered_map<char, int> charCount;

    // Opening the file for reading
    ifstream read_file("example.txt");

    // Check if the file has been opened successfully
    if (!read_file.is_open()) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    // Read from the file line by line
    while (getline(read_file, line)) {
        // Iterate over each character in the line
        for (char ch : line) {
            if (isalpha(ch)) { // Only consider alphabetic characters
                ch = tolower(ch); // Convert to lowercase for uniformity
                charCount[ch]++;
            }
        }
    }

    // Close the file after reading
    read_file.close();

    // Display the duplicate characters and their counts
    cout << "Duplicate Characters and Counts:" << endl;
    for (const auto& entry : charCount) {
        if (entry.second > 1) { // Only show duplicates
            cout << entry.first << ": " << entry.second << endl;
        }
    }

    return 0;
}