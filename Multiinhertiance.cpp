#include <iostream>
using namespace std;

class Sports {
public:
    int sportsScore;

    void inputSports() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }
};

class Academics {
public:
    int marks1, marks2, marks3;

    void inputAcademics() {
        cout << "Enter marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter marks for Subject 3: ";
        cin >> marks3;
    }
};

class Student : public Sports, public Academics {
public:
    void total() {
        int academicTotal = marks1 + marks2 + marks3;
        int grandTotal = academicTotal + sportsScore;

        cout << "\n--- Student Report ---" << endl;
        cout << "Academic Total = " << academicTotal << endl;
        cout << "Sports Score   = " << sportsScore << endl;
        cout << "Grand Total    = " << grandTotal << endl;
    }
};

int main() {
    Student s;

    s.inputAcademics();
    s.inputSports();
    s.total();

    return 0;
}
