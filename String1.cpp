#include <iostream>   
#include <string>

using namespace std;

int main() {
    string s1 = "Hello, ";
    string s2 = "World!";
    string s3;

    // Concatenating using +
    s3 = s1 + s2;
    cout << "Concatenated String: " << s3 << endl;

    // Append using +=
    s1 += s2;
    cout << "Appended String: " << s1 << endl;

    // Comparing using ==
    if (s1 == s3) {
        cout << "Strings are equal." << endl;
    } else {
        cout << "Strings are not equal." << endl;
    }

    // Comparison using <
    if (s1 < s2) {
        cout << "\"" << s1 << "\" comes before \"" << s2 << "\"" << endl;
    } else {
        cout << "\"" << s1 << "\" comes after \"" << s2 << "\"" << endl;
    }

    // Access character using []
    cout << "First character of s1: " << s1[0] << endl;

    return 0;
}

