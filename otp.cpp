#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to generate a random OTP code
string generateOTP(int length) {
    const string letters = "ABCDEFGHIJKLMNO";
    const int numRangeStart = 1;
    const int numRangeEnd = 10;
    string otp;

    // Seed the random number generator
    srand(time(nullptr));

    for (int i = 0; i < length; ++i) {
        int choice = rand() % 2; // Randomly choose between letter or number

        if (choice == 0) {
            // Append a random letter from 'A' to 'P'
            otp += letters[rand() % letters.size()];
        } else {
            // Append a random number from 1 to 10
            otp += to_string(numRangeStart + rand() % numRangeEnd);
        }
    }

    return otp;
}

int main() {
    int otpLength = 6; // Length of the OTP code
    string otp = generateOTP(otpLength);
    cout << "Generated OTP: " << otp << endl;
    return 0;
}
