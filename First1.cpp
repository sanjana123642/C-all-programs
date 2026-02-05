#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int add(int a , int b){
    return a+b;
}

void greet(){
    cout << "Welcome to C++ Functions\n";
}

bool isEven(int n){
    return (n % 2 == 0);
}
void callByValue(int x){
    x = 100;
    cout << "Inside Call by Value:" << x << endl;

}
void CallByReference(int &x){
    x = 200;
}

void CallByPointer(int *x){
    *x = 300;

}
int sumDefault(int a , int b = 10){
    return a+b;
}

inline int square(int x ){
    return x*x;
}

int multipy(int a , int b){
    return a*b;
}
int float(int a , int b){
    float multiply(float a , float b) ;
}

int main(){

    cout << "/n===== CALL BY VALUE =====\n";
    int a = 10;
    callByValue(a);
    cout << "After Call by Value:" << a << endl;

    cout << "/n===== CALL BY REFERNECE =====\n";
    int b = 20;
    CallByReference(b);
    cout << "After Call by Reference :" << b << endl;
    
    cout<<"\n===== CALL BY POINTER=====\n";
    int c = 30;
    CallByPointer(&c);
    cout << "After Call by Pointer :" << c << endl;

    cout <<"/n===== DEFAULT ARGUEMENT =====\n";

}



















