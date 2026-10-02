#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

string timeConversion(string s) {
    
    int hour = stoi(s.substr(0, 2));
    
    
    char am_pm = s[8];

    
    if (am_pm == 'A' && hour == 12) {
        hour = 0;
    } else if (am_pm == 'P' && hour != 12) {
        hour += 12;
    }

    
    char buf[3];
    snprintf(buf, sizeof(buf), "%02d", hour);

    
    return string(buf) + s.substr(2, 6);
}

int main() {
    
    string input = "07:05:45PM";
    string result = timeConversion(input);
    
    cout << "Input:  " << input << endl;
    cout << "Output: " << result << endl; 

    return 0;
}