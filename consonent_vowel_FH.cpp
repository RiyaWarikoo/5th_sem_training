#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype> // For isalpha, isdigit, tolower

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch); // Convert to lowercase for uniformity
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to check if a character is a consonant
bool isConsonant(char ch) {
    ch = tolower(ch); // Convert to lowercase for uniformity
    return isalpha(ch) && !isVowel(ch); // Check if it's an alphabet character and not a vowel
}

int main() {
    string line;

    // Opening the file for reading
    ifstream read_file("example.txt");

    // Check if the file has been opened successfully
    if (!read_file.is_open()) {
        cout << "Error opening the file for reading." << endl;
        return 1;
    }

    // Read from the file line by line and process characters
    while (getline(read_file, line)) {
        cout << "Line: " << line << endl;

        // Initialize vowel and consonant counts
        int vowelCount = 0;
        int consonantCount = 0;

        // Iterate over each character in the line
        for (char ch : line) {
            if (isVowel(ch)) {
                vowelCount++;
            } else if (isConsonant(ch)) {
                consonantCount++;
            }
        }

        // Display the count of vowels and consonants
        cout << "Vowels: " << vowelCount << ", Consonants: " << consonantCount << endl;
    }

    // Close the file after reading
    read_file.close();

    return 0;
}