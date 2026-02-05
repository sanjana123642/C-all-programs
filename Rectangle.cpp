#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

    int area() {
        return length * width;
    }

public:
    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    void displayArea() {
        cout << "Area of Rectangle = " << area();
    }
};

int main() {
    Rectangle r;
    r.setValues(5, 10);
    r.displayArea();
    return 0;
}
