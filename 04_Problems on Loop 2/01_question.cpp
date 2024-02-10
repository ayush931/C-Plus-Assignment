//? Write a program to calculate the factorial of a number.

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "Factorial is: " << factorial << endl;

    return 0;
}