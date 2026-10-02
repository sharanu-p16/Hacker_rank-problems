#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cmath>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */
int diagonalDifference(vector<vector<int>> arr) {
    int dia = 0;
    int antidia = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        dia += arr[i][i];
        antidia += arr[i][n - 1 - i];
    }
    
    return abs(dia - antidia);
}

int main() {
    string n_temp;
    if (!getline(cin, n_temp)) return 0;
    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < n; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);
            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !isspace(ch);
        })
    );
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !isspace(ch);
        }).base(),
        s.end()
    );
    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;
    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
