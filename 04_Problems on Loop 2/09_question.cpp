//? Write a C++ program to check whether a Number can be expressed as a sum of Two Prime Numbers.

#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    bool found = false;
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            cout << n << " can be expressed as a sum of two prime numbers: " << i << " + " << n - i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << n << " cannot be expressed as a sum of two prime numbers." << endl;
    }
    return 0;
}