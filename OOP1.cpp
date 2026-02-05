#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int age;

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.rollNo = 101;
    s1.name = "Alice";
    s1.age = 20;

    s1.display();

    return 0;
}
