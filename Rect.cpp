#include <iostream>
using namespace std;

class Shape{
public:
    void draw(){
        cout<< "Drawing Shape" << endl;
    }
};
class Rectangle : public Shape{
    public:
        float length, breadth;

        void area(){
            cout << "Area of Rectangle = " << length*breadth <<
        endl;
        
        }
};
