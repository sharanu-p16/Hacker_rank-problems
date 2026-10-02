#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    long long total_sum = 0;
    int min_val = arr[0];
    int max_val = arr[0];

    for (int num : arr) {
        total_sum += num;
        min_val = min(min_val, num);
        max_val = max(max_val, num);
    }

    long long min_sum = total_sum - max_val;//minimum
    long long max_sum = total_sum - min_val;//maximum

    cout << min_sum << " " << max_sum << endl;
}

int main() {
    
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << "Output: ";
    miniMaxSum(arr); // Expected Output: 10 14

    return 0;
}