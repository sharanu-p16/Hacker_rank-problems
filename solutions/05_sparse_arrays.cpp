#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    
    unordered_map<string, int> count;
    for (const string &s : stringList) {
        count[s]++;
    }

   
    vector<int> result;
    for (const string &q : queries) {
        result.push_back(count[q]);
    }

    return result;
}

int main() {
    
    vector<string> stringList = {"aba", "baba", "aba", "xzxb"};
    vector<string> queries = {"aba", "xzxb", "ab"};

    vector<int> result = matchingStrings(stringList, queries);

    
    cout << "Results: ";
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl; 

    return 0;
}