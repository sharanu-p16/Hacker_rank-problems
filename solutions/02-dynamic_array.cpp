#include <iostream>
#include <vector>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    
    vector<vector<int>> arr(n);
    vector<int> result;
    int lastAnswer = 0;

    for (const auto& q : queries) {
        int type = q[0];
        int x = q[1];
        int y = q[2];

        
        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            
            arr[idx].push_back(y);
        } else if (type == 2) {
            
            lastAnswer = arr[idx][y % arr[idx].size()];
            
            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {
    
    int n = 2;
    vector<vector<int>> queries = {
        {1, 0, 5},
        {1, 1, 7},
        {1, 0, 3},
        {2, 1, 0},
        {2, 1, 1}
    };

    vector<int> output = dynamicArray(n, queries);

    cout << "Output:" << endl;
    for (int ans : output) {
        cout << ans << endl;
    }

    return 0;
}