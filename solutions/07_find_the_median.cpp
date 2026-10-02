#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Complete the 'findMedian' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */
int findMedian(vector<int> arr) {
    // Sort the elements in ascending order
    sort(arr.begin(), arr.end());
    
   
    return arr[arr.size() / 2];
}

int main() {
    
    vector<vector<int>> test_cases = {
        {0, 1, 2, 4, 6, 5, 3},  
        {7, 10, 4, 3, 20, 15},   
        {1, 3, 5}              
    };

    for (size_t i = 0; i < test_cases.size(); ++i) {
        int median = findMedian(test_cases[i]);
        cout << "Test Case " << i + 1 << " Output: " << median << endl;
    }

    return 0;
}