#include <iostream>
#include <vector>
using namespace std;

int countHighestConsecutiveOnes(const vector<int>& arr) {
    int maxCount = 0, currentCount = 0;
    for (int n : arr) {
        currentCount = (n == 1) ? currentCount + 1 : 0;
        maxCount = max(maxCount, currentCount);
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 0, 1, 1, 0, 0, 1};
    cout << "The highest number of consecutive 1s is: " << countHighestConsecutiveOnes(arr) << endl;
    return 0;
}
