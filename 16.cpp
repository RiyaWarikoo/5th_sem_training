#include <iostream>
using namespace std;

void printBoxPattern(int lines) {
    for (int i = 0; i < lines; ++i) {
        for (int j = 0; j < lines; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int lines = 4;
    printBoxPattern(lines);
    return 0;
}
