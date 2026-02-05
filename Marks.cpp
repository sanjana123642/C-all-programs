#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    cout << ((marks >= 90 && marks <= 100) ? "Grade: A" :
            (marks >= 70 && marks < 90)   ? "Grade: B" :
            (marks >= 50 && marks < 70)   ? "Grade: C" :
        "Fail");

    return 0;
}
