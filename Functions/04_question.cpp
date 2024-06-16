// Given two numbers a and b, write a program using functions to print all the odd numbers between them.

// 1st method

// #include<iostream>
// using namespace std;

// int main () {
//     int a, b;
//     cin >> a;
//     cin >> b;

//     for (int i = a; i <= b; i++) {
//         if (i % 2 != 0) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// 2nd method

#include<iostream>
using namespace std;

bool oddNumber (int number) {
    if (number % 2 != 0) {
        return true;
    }
    else {
        return false;
    }
}

int main () {
    int a, b; 
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    for (int i = a; i <= b; i++) {
        if (oddNumber(i)) {
            cout << i << " ";
        }
    }
    return 0;
}