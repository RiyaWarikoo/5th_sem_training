#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Program {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0; // Handle empty vector

        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (maxProfit < (prices[i] - minPrice)) {
                maxProfit = prices[i] - minPrice;
            }
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
        }
        return maxProfit;
    }
};

int main() {
    Program program;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << program.maxProfit(prices) << endl;

    return 0;
}