#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> closestNumbers(vector<int> arr) {
    sort(arr.begin(), arr.end());

    int min_diff = INT_MAX;
    vector<int> result;

    for (size_t i = 0; i < arr.size() - 1; i++) {
        int diff = arr[i + 1] - arr[i];

        if (diff < min_diff) {
            min_diff = diff;
            result.clear();
            result.push_back(arr[i]);
            result.push_back(arr[i + 1]);
        } else if (diff == min_diff) {
            result.push_back(arr[i]);
            result.push_back(arr[i + 1]);
        }
    }

    return result;
}

int main() {
    
    vector<int> arr = {5, 4, 3, 2};

    vector<int> result = closestNumbers(arr);

    // Output: 2 3 3 4 4 5
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}