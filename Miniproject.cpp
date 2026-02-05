#include <iostream>
#include <string>
using namespace std;

class C {
protected:
    string n;
    string p;
    string e;

public:
    void s() {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, n);

        cout << "Enter phone: ";
        getline(cin, p);

        cout << "Enter email: ";
        getline(cin, e);
    }

    string g() {
        return n;
    }

    void h() {
        cout << "Name: " << n << endl;
        cout << "Phone: " << p << endl;
        cout << "Email: " << e << endl;
    }
};

class P : public C {
private:
    string b;

public:
    void s() {
        C::s();
        cout << "Enter birthday: ";
        getline(cin, b);
    }

    void d() {
        cout << "\nPersonal Contact: \n";
        C::h();
        cout << "Birthday: " << b << endl;
    }
};

class B : public C {
private:
    string c;
    string g;

public:
    void s() {
        C::s();
        cout << "Enter company: ";
        getline(cin, c);

        cout << "Enter designation: ";
        getline(cin, g);
    }

    void d() {
        cout << "\nBusiness Contact: \n";
        C::h();
        cout << "Company: " << c << endl;
        cout << "Designation: " << g << endl;
    }
};

class A {
private:
    C* c[100];
    int t;

public:
    void i() {
        t = 0;
    }

    void p() {
        P* x = new P();
        x->s();
        c[t] = x;
        t++;
        cout << "Personal contact added\n";
    }

    void b() {
        B* y = new B();
        y->s();
        c[t] = y;
        t++;
        cout << "Business contact added\n";
    }

    void a() {
        if (t == 0) {
            cout << "No contacts available\n";
            return;
        }

        for (int i = 0; i < t; i++) {
            cout << "\nContact " << i + 1 << endl;
            c[i]->h();
        }
    }

    void r() {
        string k;
        cout << "Enter name to search: ";
        cin.ignore();
        getline(cin, k);

        for (int i = 0; i < t; i++) {
            if (c[i]->g() == k) {
                cout << "Contact found:\n";
                c[i]->h();
                return;
            }
        }
        cout << "Contact not found\n";
    }
};

int main() {
    A a;
    a.i();

    int o;
    do {
        cout << "\nADDRESS BOOK: \n";
        cout << "1. Add Personal Contact\n";
        cout << "2. Add Business Contact\n";
        cout << "3. View All Contacts\n";
        cout << "4. Search Contact\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> o;

        switch (o) {
            case 1:
                a.p();
                break;
            case 2:
                a.b();
                break;
            case 3:
                a.a();
                break;
            case 4:
                a.r();
                break;
            case 0:
                cout << "Exiting program\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (o != 0);

    return 0;
}