//? Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;

int main () {
    int x, y;
    cout << "The first number is: ";
    cin >> x;
    cout << "The second number is: ";
    cin >> y;

    cout << (x == y);
    return 0;
}