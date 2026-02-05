#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void print(char c) {
        cout << "Character: " << c << endl;
    }

    void print(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print p;

    p.print('A');
    p.print(string("Hello"));   

    return 0;
}
