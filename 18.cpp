#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int S, P;
    cin >> S >> P;

    // Calculate the discriminant
    int discriminant = S * S - 4 * P;

    // Check if the discriminant is non-negative
    if (discriminant < 0) {
        cout << "Invalid input. No real solutions exist." << endl;
        return 0;
    }

    // Calculate the roots using the quadratic formula
    int t1 = (S + sqrt(discriminant)) / 2;
    int t2 = (S - sqrt(discriminant)) / 2;

    // Determine x and y in ascending order
    int x = min(t1, t2);
    int y = max(t1, t2);

    // Output the result in2 ascending order
    cout << x << " " << y << endl;

    return 0;
}
