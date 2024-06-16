// Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include<iostream>
using namespace std;

bool prime (int num) {
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main () {
    int a, b;
    cin >> a;
    cin >> b;
    for (int i = a; i <= b; i++) {
        if (prime(i)) {
            cout << i << " ";
        }
    }
}