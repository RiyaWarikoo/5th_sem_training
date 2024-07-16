#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    q.push("abha");
    q.push("sabha");
    q.push("mabha");

    cout << "Queue size: " << q.size() << endl;

    for (int i = 0; i < 3; ++i) {
        if (!q.empty()) {
            cout << "Front element: " << q.front() << endl;
            q.pop();
            cout << "Queue size after pop: " << q.size() << endl;
        }
    }

    return 0;
}
