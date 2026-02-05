#include <iostream>
using namespace std;

class Employee{
    public:
    int empID;

    void showID(){
        cout << "Emplyee ID: "<< empID<<endl;

    }
};

class Salary: public Employee{
    public:
    int salary;

    void showSalary(){
        cout << "Salary: "<< salary<<endl;
    }
};

int main()
{
    Salary s;
    s.empID = 123;
    s.salary = 5000;
    s.showID();
    s.showSalary();
    return 0;
}