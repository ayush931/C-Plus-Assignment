//? Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;

int main () {

    int a, b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    int c;
    c = b;
    b = a;
    a = c;

    cout << "a: " << a << endl;
    cout<< "b: " << b <<endl;

    return 0;
}