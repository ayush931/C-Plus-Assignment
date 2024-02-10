//? Write a program to take the values of two variables a and b from the keyboard and then check if both the coditions 'a < 50' and 'a < b' are true.

#include<iostream>
using namespace std;

int main () {
    int a, b;
    cout << "The first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    cout << (a < 50 && a < b);

    return 0;
}