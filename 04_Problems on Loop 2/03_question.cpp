//? Write a program to find the sum of n natural numbers.

#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "The sum of given natural number is: " << sum << endl;

    return 0;
}