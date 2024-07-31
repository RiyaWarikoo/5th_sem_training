#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string username, password;

    // Get username and password from user
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Open a file in write mode
    ofstream outfile("user_data.txt");

    // Check if the file opened successfully
    if (outfile.is_open()) {
        // Write username and password to the file
        outfile << "Username: " << username << endl;
        outfile << "Password: " << password << endl;

        // Close the file
        outfile.close();

        cout << "User data stored successfully." << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
