#include <iostream>
using namespace std;

void areaRectangle()
{ 
    double l, b;
    cin >> l >> b;
    cout << l * b << endl;
}

void areaTriangle()
{
    double base, height;
    cin >> base >> height;
    cout << 0.5 * base * height << endl;
}

void areaSquare()
{
    double side;
    cin >> side;
    cout << side * side << endl;
}

void areaCircle()
{
    double r;
    cin >> r;
    cout << 3.14 * r * r << endl;
}

int main()
{
    areaRectangle();
    areaTriangle();
    areaSquare();
    areaCircle();
    return 0;
}
