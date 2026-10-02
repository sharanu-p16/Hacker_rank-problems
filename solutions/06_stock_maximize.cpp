#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Complete the 'stockmax' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY prices as parameter.
 */
long stockmax(vector<int> prices) {
    long max_profit = 0;
    int max_price = 0;

    // Traverse backward from the last day to the first day
    for (int i = prices.size() - 1; i >= 0; --i) {
        if (prices[i] > max_price) {
            max_price = prices[i];
        } else {
            max_profit += (max_price - prices[i]);
        }
    }

    return max_profit;
}

int main() {
    
    vector<vector<int>> test_cases = {
        {5, 3, 2},       
        {1, 2, 100},     
        {1, 3, 1, 2}     
    };

    for (size_t i = 0; i < test_cases.size(); ++i) {
        long result = stockmax(test_cases[i]);
        cout << "Test Case " << i + 1 << " Output: " << result << endl;
    }

    return 0;
}