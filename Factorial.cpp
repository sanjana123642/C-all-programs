#include <iostream>

int main(){
    int n = 5;
    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout<< "Factorial =" << factorial;
    return 0;
}using namespace std;

