//? Write a program to find the sum of n natural numbers.

#include<iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the n natural number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of given series of n natural number is: " << sum << endl;

    return 0;
}