#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
    string line;
    unordered_map<string, int> wordCount;

    // Opening the file for reading
    ifstream read_file("example.txt");

    // Check if the file has been opened successfully
    if (!read_file.is_open()) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    // Read from the file line by line
    while (getline(read_file, line)) {
        stringstream ss(line);
        string word;
        
        // Read each word from the line
        while (ss >> word) {
            // Increment the word count in the map
            wordCount[word]++;
        }
    }

    // Close the file after reading
    read_file.close();

    // Display the word count
    cout << "Word Count:" << endl;
    for (const auto& entry : wordCount) {
        cout << entry.first << ": " << entry.second << endl;
    }
    return 0;
}