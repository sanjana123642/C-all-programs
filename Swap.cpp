#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)

{
    int temp;
    temp = a;   
    a = b;      
    b = temp;   
}

int main()
{
    int x = 3, y = 7;

    cout << "Before swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    swapNumbers(x, y);   
    cout << "After swapping:\n";
    cout << "x = " << x << " y = " << y << endl;

    return 0;
}

